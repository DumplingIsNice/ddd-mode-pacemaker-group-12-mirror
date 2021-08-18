/*
 * buttons.c
 *
 *  Created on: 18 Aug 2021
 *      Author: Hao Lin
 */

#include "buttons.h"

void buttons_interrupts_function(void* context, alt_32 id)
{
	uint* temp = (uint*) context;
	(*temp) = GET_BUTTONS;

	// clear the edge capture register
	CLR_BUTTONS_EDGE;
	return;
}

void* buttons_init()
{
	static uint flag_btn = 0;
	void* p_flag_btn = (void*) &flag_btn;

	// clears the edge capture register
	CLR_BUTTONS_EDGE;

	// enable interrupts for buttons
	EN_BUTTONS_IRQ;

	// register the ISR, CONTEXT IS THE PASSED POINTER ARGUMENT
	alt_irq_register(BUTTONS_IRQ, p_flag_btn, buttons_interrupts_function);

	return p_flag_btn;
}

void handle_buttons(uint* flag_btn)
{
//	static uint flag_proc = 0;
	char printChar = NO_PULSE;

	// Protection to double recognition
//	if(flag_proc)
//	{
//		*flag_btn = 0;
//		flag_proc = 0;
//	}

	if(*flag_btn)
	{
		switch (*flag_btn)
			{
				case BUTTON_1:
					printChar = V_PULSE;
					pulse_V();
					break;
				case BUTTON_0:
					printChar = A_PULSE;
					pulse_A();
					break;
				default:
					printChar = DEFAULT_PULSE;
					break;
			}
		printf("button prints: %c\n", printChar);
//		flag_proc = 1;
		*flag_btn = 0;
	}
	return;
}

void reset_pulse()
{

}

void pulse_V()
{
	LED_write(LED_RED, LED_V, HIGH);
}

void pulse_A()
{
	LED_write(LED_GREEN, LED_A, HIGH);
}

void clear_V()
{
	LED_write(LED_RED, LED_V, LOW);
}

void clear_A()
{
	LED_write(LED_RED, LED_V, LOW);
}
