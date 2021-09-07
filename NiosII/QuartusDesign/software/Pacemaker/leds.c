/*
 * leds.c
 *
 *  Created on: 18 Aug 2021
 *      Author: Hao Lin
 */

#include "leds.h"

void LED_init()
{
	// Sets all LED to HIGH
//	SET_LED_RED(LED_R_ALL);
//	SET_LED_GREEN(LED_G_ALL);

	// Sets all LED to LOW
	CLEAR_LED_RED;
	CLEAR_LED_GREEN;
}

/* Inputs:
 * color of led - Macro
 * binary position of led - logic high, rest logic low
 * desired on or off - Macro
*/
void LED_write(char colour, uint led_pos, uint is_on)
{

	uint current_led_pos = 0;

	switch (colour)
		{
			case LED_RED:
				current_led_pos = GET_LED_RED;
				current_led_pos = set_on_off(led_pos, current_led_pos, is_on);
				SET_LED_RED(current_led_pos);
				return;
			case LED_GREEN:
				current_led_pos = GET_LED_GREEN;
				current_led_pos = set_on_off(led_pos, current_led_pos, is_on);
				SET_LED_GREEN(current_led_pos);
				return;
			default:
				return;
		}
}

uint set_on_off(uint led_pos, uint current_led_pos, uint is_on)
{
	switch (is_on)
	{
		case HIGH:
			current_led_pos |= led_pos;
			break;
		case LOW:
			current_led_pos &= ~led_pos;
			break;
		default:
			;
	}

	return current_led_pos;
}

void handle_disp_LED(char* p, char io)
{
	if (*p != NO_PULSE)
	{
		switch(io)
		{
			case 's':
				switch (*p)
				{
					case V_PULSE:
						pulse_LED_VS();
						break;
					case A_PULSE:
						pulse_LED_AS();
						break;
					default:
						;
				}
				break;
			case 'p':
				switch (*p)
				{
					case V_PULSE:
						pulse_LED_VP();
						break;
					case A_PULSE:
						pulse_LED_AP();
						break;
					default:
						;
				}
				break;
			default:
				;
		}
	}
}

void reset_pulse_LED()
{
	clear_LED_VS();
	clear_LED_AS();
	clear_LED_VP();
	clear_LED_AP();
}

void pulse_LED_VS()
{
	LED_write(LED_GREEN, LED_VS, HIGH);
	printf("Sensed: %c\n", V_PULSE);
//	usleep(LED_DELAY);
//	clear_LED_V();
}

void pulse_LED_AS()
{
	LED_write(LED_RED, LED_AS, HIGH);
	printf("Sensed: %c\n", A_PULSE);
//	usleep(LED_DELAY);
//	clear_LED_A();
}

void clear_LED_VS()
{
	LED_write(LED_RED, LED_AS, LOW);
}

void clear_LED_AS()
{
	LED_write(LED_GREEN, LED_VS, LOW);
}

void pulse_LED_VP()
{
	LED_write(LED_GREEN, LED_VP, HIGH);
	printf("Pulsed: %c\n", V_PULSE);
//	usleep(LED_DELAY);
//	clear_LED_V();
}

void pulse_LED_AP()
{
	LED_write(LED_RED, LED_AP, HIGH);
	printf("Pulsed: %c\n", A_PULSE);
//	usleep(LED_DELAY);
//	clear_LED_A();
}

void clear_LED_VP()
{
	LED_write(LED_RED, LED_AP, LOW);
}

void clear_LED_AP()
{
	LED_write(LED_GREEN, LED_VP, LOW);
}

void pulse_LED_tick()
{
	LED_write(LED_GREEN, LED_0, HIGH);
//	usleep(LED_DELAY);
//	LED_write(LED_GREEN, LED_0, LOW);
}

void echo_LED_read(char* r)
{
	switch (*r)
	{
		case(V_PULSE):
			pulse_LED_VS();
			printf("Read: %c\n", V_PULSE);
			break;
		case(A_PULSE):
			pulse_LED_AS();
			printf("Read: %c\n", A_PULSE);
			break;
		default:
			;
	}
}
