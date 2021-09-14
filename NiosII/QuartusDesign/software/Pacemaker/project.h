/*
 * project.h
 *
 *  Created on: 18 Aug 2021
 *      Author: Hao Lin
 */

// Contains Common Declarations

#ifndef PROJECT_H_
#define PROJECT_H_

// CPU Generated Symbolic Names
#include <system.h>
// Interrupt library
#include <sys/alt_irq.h>
// PIO register writing and reading operation
#include <altera_avalon_pio_regs.h>
// Standard I/O
#include <stdio.h>
// Delay functions
#include <unistd.h>
// Timer
#include <sys/alt_alarm.h>
// String
#include <string.h>

extern char sense_v;
extern char pulse_v;

// Custom API Libraries
#include "buttons.h"
#include "leds.h"
#include "switches.h"
#include "timer.h"
#include "UART.h"
#include "fsm.h"

// Common macros
#define A_PULSE 		'A'
#define V_PULSE 		'V'
#define DEFAULT_PULSE 	'D'
#define NO_PULSE 		'N'

#define HIGH 	1
#define LOW 	0
#define TRUE	1
#define FALSE	0

#define RESET 0

#endif /* PROJECT_H_ */
