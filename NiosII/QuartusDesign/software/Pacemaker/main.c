/*
 * hello_world.c
 *
 *  Created on: 16 Aug 2021
 *      Author: Hao Lin
 */

#include "project.h"

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
			handle_tick(p_time_count);

			// Currently Polling, need to find out switches interrupt setup method
			// switch interrupt is not configured for the given board configuration
			handle_switches(&flag_mode1, &flag_mode2);

			// Mode 1 Block
			if (flag_mode1)
			{
				EN_BUTTONS_IRQ;
				handle_buttons(p_flag_btn);
			}

			// Mode 2 Block
			if (flag_mode2)
			{
				DIS_BUTTONS_IRQ;
				*((int*) p_flag_btn) = 0;
			}

			// LED off logic, Replacement for usleep().
			if (*((uint*) p_time_count)%100 == 0)
			{
				reset_pulse();
			}

		}
	return 0;
}
