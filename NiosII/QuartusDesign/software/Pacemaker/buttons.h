/*
 * buttons.h
 *
 *  Created on: 18 Aug 2021
 *      Author: Hao Lin
 */

#ifndef BUTTONS_H_
#define BUTTONS_H_

#include "project.h"

// Pushbutton Peripheral Values

// Pushbutton Binary Positions
#define BUTTON_0	(1 << 0)
#define BUTTON_1	(1 << 1)
#define BUTTON_2	(1 << 2)
#define BUTTON_ALL 	(1 << 3)

#define A_PULSE 'A'
#define V_PULSE 'V'
#define DEFAULT_PULSE 'D'
#define NO_PULSE 'N'

// Nios II Pushbutton API Macros
#define GET_BUTTONS 		IORD_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE)
#define CLR_BUTTONS_EDGE 	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE, 0x0)
#define EN_BUTTONS_IRQ		IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BUTTONS_BASE, BUTTON_0|BUTTON_1|BUTTON_2)
#define DIS_BUTTONS_IRQ		IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BUTTONS_BASE, 0x0)

// Function Declarations
	// IRQ Routine
void buttons_interrupts_function(void* context, alt_32 id);
void* buttons_init();
void handle_buttons(uint* flag_btn);

#endif /* BUTTONS_H_ */
