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
#define TICK_COUNT		1000
#define TICK_COUNT_HALF TICK_COUNT/2

// Set up timer to turn off led instead of delay
// In microseconds
#define LED_DELAY		1000

alt_u32 timer_isr_function(void* context);
void* timer_init();
void handle_tick(void* p_flag_tick);
void LED_tick();

#endif /* TIMER_H_ */
