/*
 * hello_world.c
 *
 *  Created on: 16 Aug 2021
 *      Author: Hao Lin
 */

#include "project.h"

char write_v = 'N';
char read_v = 'N';

int main()
{

	printf("Hello from Nios II!\n");

	// Setup Peripherals
	void* p_flag_btn = buttons_init();
	LED_init();

	alt_alarm timer;
	void* p_time_count = timer_init();
	alt_alarm_start(&timer, TIMER_TIMEOUT, timer_isr_function, p_time_count);

	uint flag_mode1 = TRUE;
	uint flag_mode2 = FALSE;

	while(1)
		{
			// Internal SCChart FSM handler
			handle_tick(p_time_count);

			// Switch interrupt is not configured for the given board configuration
			// Polling instead
			handle_switches(&flag_mode1, &flag_mode2);

			// Mode 1 Block
			if (flag_mode1)
			{
				EN_BUTTONS_IRQ;
				handle_buttons(p_flag_btn);
				handle_pulse_LED(&write_v);
			}

			// Mode 2 Block
			if (flag_mode2)
			{
				DIS_BUTTONS_IRQ;
				*((int*) p_flag_btn) = 0;

				read_v = 'N';
				handle_uart(&write_v, &read_v);
//				write_v = 'N';

				// Echo read value from LEDs
				echo_LED_read();
			}

			// LED off logic, Replacement for usleep().
			if (*((uint*) p_time_count)%100 == 0)
			{
				reset_pulse_LED();
			}
		}
	return 0;
}
