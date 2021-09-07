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
	alt_irq_register(BUTTONS_IRQ, p_flag_btn,
					 (alt_isr_func) buttons_interrupts_function);

	return p_flag_btn;
}

void handle_buttons(void* p_flag_btn)
{

	uint* flag_btn = (uint*) p_flag_btn;

	char pulse = NO_PULSE;

	// Flag_pro handles an console glitch
	// From printing too fast?
	static uint flag_proc = 0;
	if(flag_proc)
	{
		*flag_btn = 0;
		flag_proc = 0;
	}

	if(*flag_btn)
	{
		switch (*flag_btn)
			{
				case BUTTON_1:
					pulse = A_PULSE;
					break;
				case BUTTON_0:
					pulse = V_PULSE;
					break;
				default:
					pulse = DEFAULT_PULSE;
					break;
			}

		sense_v = pulse;

		flag_proc = 1;
		*flag_btn = 0;
	}
	return;
}
