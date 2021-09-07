/*
 * switches.h
 *
 *  Created on: 18 Aug 2021
 *      Author: Hao Lin
 */

#ifndef SWITCHES_H_
#define SWITCHES_H_

#include "project.h"

// Switches Binary Positions
#define SWITCH_0	(1 << 0)
#define SWITCH_1	(1 << 1)
#define SWITCH_2 	(1 << 2)
#define SWITCH_3 	(1 << 3)
#define SWITCH_4 	(1 << 4)
#define SWITCH_5 	(1 << 5)
#define SWITCH_6 	(1 << 6)
#define SWITCH_7 	(1 << 7)
#define SWITCH_ALL 	0x03fff

// Nios II Switchs API Macros
#define GET_SWITCHES IORD_ALTERA_AVALON_PIO_DATA(SWITCHES_BASE)

// Handles the switching between two modes based on the switch position
	/*
	 * Inputs:
	 * Flag pointer for mode 1
	 * Flag pointer for mode 2
	 */
void handle_switches(uint* mode1, uint* mode2);

#endif /* SWITCHES_H_ */
