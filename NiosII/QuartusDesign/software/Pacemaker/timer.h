/*
 * timer.h
 *
 *  Created on: 6 Sep 2021
 *      Author: Hao Lin
 */

#ifndef TIMER_H_
#define TIMER_H_

#include "project.h"

// Timer Values in milliseconds
#define TIMER_TIMEOUT 	1

// Actual tick time in milliseconds
#define TICK_COUNT			10
#define TICK_COUNT_TENTH 	(uint)(TICK_COUNT/10)
#define TICK_COUNT_FIFTH	(uint)5*TICK_COUNT_TENTH

// Set up timer to turn off led instead of delay
// In microseconds
#define LED_DELAY		1000

// Function Declarations
	// ISR Routine
alt_u32 timer_isr_function(void* context);
	// Setup timer count value
void* timer_init();
	// Services FSM tick
void handle_timer(void* p_time_count, void* p_is_tick);

#endif /* TIMER_H_ */
