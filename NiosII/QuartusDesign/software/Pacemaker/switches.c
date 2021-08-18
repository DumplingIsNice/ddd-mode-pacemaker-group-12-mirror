/*
 * switches.c
 *
 *  Created on: 18 Aug 2021
 *      Author: Hao Lin
 */

#include "switches.h"

// Incomplete, seeking to move to interrupt

void handle_switches(uint* mode1, uint* mode2)
{
	int switch_value = GET_SWITCHES;

	switch (switch_value & SWITCH_0)
	{
		case LOW:
			*mode2 = FALSE;
			*mode1 = TRUE;
			LED_write(LED_GREEN, LED_2, LOW);
			LED_write(LED_GREEN, LED_1, HIGH);
			break;
		case HIGH:
			*mode1 = FALSE;
			*mode2 = TRUE;
			LED_write(LED_GREEN, LED_1, LOW);
			LED_write(LED_GREEN, LED_2, HIGH);
			break;
		default:
			;
	}
}
