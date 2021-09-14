/*
 * hello_world.c
 *
 *  Created on: 16 Aug 2021
 *      Author: Hao Lin
 */

#include "project.h"

char sense_v = 'N';
char pulse_v = 'N';

int main()
{

	printf("Hello from Nios II!\n");

	// Initialize FSM parameters
	TickData data;
	TickData* p_data = &data;
	data_init(p_data);

	uint is_tick = FALSE;
	uint tick_count = 0;

	// Setup Peripherals
	void* p_flag_btn = buttons_init();
	LED_init();

	alt_alarm timer;
	void* p_time_count = timer_init();
	alt_alarm_start(&timer, TIMER_TIMEOUT, timer_isr_function, p_time_count);

	uint flag_mode1 = TRUE;
	uint flag_mode2 = FALSE;
	uint flag_reset_data = FALSE;

	while(1)
		{
			// Internal SCChart FSM handler
			handle_timer(p_time_count, (void*) &is_tick);

			// Tick handling
			if (is_tick){
				if (flag_reset_data)
				{
					data_init(p_data);
					printf("Reset Data");
					flag_reset_data = FALSE;
				}

				tick(&data);
				reset_inputs(&data);

				tick_count++;
				printf("tick:%d\n", tick_count);
				pulse_LED_tick();
				is_tick = FALSE;
			}

			// Switch interrupt is not configured for the given board configuration
			// Polling instead
			handle_switches(&flag_mode1, &flag_mode2, &flag_reset_data);

			// Mode 1 Block
			if (flag_mode1)
			{
				// AS and VS input via buttons must be
				// In sequence.

				EN_BUTTONS_IRQ;

				// Writes to write_v
				handle_buttons(p_flag_btn);

				// Logs input value(s)
				handle_inputs(p_data);
				handle_disp_LED(&sense_v, 's');
				sense_v = NO_PULSE;

				// Logs output value(p)
				handle_outputs(p_data);
				handle_disp_LED(&pulse_v, 'p');
				pulse_v = NO_PULSE;
			}

			// Mode 2 Block
			if (flag_mode2)
			{
				DIS_BUTTONS_IRQ;
				*((int*) p_flag_btn) = 0;

				// Logs output value(p)
				handle_outputs(p_data);
				handle_disp_LED(&pulse_v, 'p');

				// sense_v should be empties to ready for new values
				sense_v = NO_PULSE;
				handle_uart(&sense_v, &pulse_v);
				handle_inputs(p_data);

				// Echo read value(s) from LEDs
				echo_LED_read(&sense_v);
				pulse_v = NO_PULSE;
			}

			// LED off logic, Replacement for usleep().
			// Set to 1 if TICK COUNT is 1 ms
			if (*((uint*) p_time_count)%TICK_COUNT_TENTH == 0)
			{
				reset_pulse_LED();
			}
		}
	return 0;
}
