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

extern char write_v;
extern char read_v;

// Custom API Libraries
#include "buttons.h"
#include "leds.h"
#include "switches.h"
#include "timer.h"
#include "UART.h"

// Example timeout values in milliseconds
#define AVI_VALUE 	300
#define AEI_VALUE 	800
#define PVARP_VALUE 50
#define VRP_VALUE 	150
#define LRI_VALUE 	950
#define URI_VALUE 	900

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
