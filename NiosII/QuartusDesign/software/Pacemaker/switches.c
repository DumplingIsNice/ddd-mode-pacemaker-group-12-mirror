/*
 * switches.c
 *
 *  Created on: 18 Aug 2021
 *      Author: Hao Lin
 */

#include "switches.h"

void handle_switches(uint* p_mode1, uint* p_mode2, uint* p_flag_reset_data)
{
	uint switch_value = GET_SWITCHES;
	switch_value = (switch_value & SWITCH_0);

	static uint prev_value = 0;
	static uint is_start = TRUE;

	if ((switch_value != prev_value)||is_start)
	{
		is_start = FALSE;
		switch ((switch_value & SWITCH_0))
		{
			case LOW:
				*p_mode2 = FALSE;
				*p_mode1 = TRUE;
				LED_write(LED_GREEN, LED_2, LOW);
				LED_write(LED_GREEN, LED_1, HIGH);
				break;
			case HIGH:
				*p_mode1 = FALSE;
				*p_mode2 = TRUE;
				LED_write(LED_GREEN, LED_1, LOW);
				LED_write(LED_GREEN, LED_2, HIGH);
				break;
			default:
				;
		}
		prev_value = switch_value;
		(*p_flag_reset_data) = TRUE;
	}
}
