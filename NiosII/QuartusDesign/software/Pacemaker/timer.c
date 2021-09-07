/*
 * timer.c
 *
 *  Created on: 6 Sep 2021
 *      Author: Hao Lin
 */

#include "timer.h"

alt_u32 timer_isr_function(void* context)
{
	uint* temp = (uint*) context;
	(*temp)++;
	return TIMER_TIMEOUT; // the next time out value
}

void* timer_init()
{
	static uint time_count = 0;
	void* p_time_count = (void*) &time_count;
	return p_time_count;
}

void handle_tick(void* p_time_count)
{
	static uint tick_count = 0;
	uint* time_count = (uint*) p_time_count;

	if (*time_count >= TICK_COUNT)
	{
		tick_count++;

		printf("tick:%d\n", tick_count);
		pulse_LED_tick();
		(*time_count) = 0;

	} else if (*time_count >= 500){
		//LED_tick reset logic
		LED_write(LED_GREEN, LED_0, LOW);
	}
}
