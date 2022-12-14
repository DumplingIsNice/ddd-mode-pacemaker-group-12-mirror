/*
 * leds.h
 *
 *  Created on: 18 Aug 2021
 *      Author: Hao Lin
 */

#ifndef LEDS_H_
#define LEDS_H_

#include "project.h"

// LED Peripheral Values

// LED Binary Positions
#define LED_0 		(1 << 0)
#define LED_1 		(1 << 1)
#define LED_2 		(1 << 2)
#define LED_3 		(1 << 3)
#define LED_4 		(1 << 4)
#define LED_5 		(1 << 5)
#define LED_6 		(1 << 6)
#define LED_7 		(1 << 7)

#define LED_G_ALL 	0xff
#define LED_R_ALL 	0x3ffff

/*
 * VERY IMPORTENT!!!
 * ALL THE LED LOGI IS INVERSED, MUST FIX LATER.
 * On the board:
 * - LED7 GREEN = VS
 * - LED0 RED 	= AS
 */
#define LED_VS 		LED_6
#define LED_AS 		LED_1

#define LED_VP 		LED_7
#define LED_AP 		LED_0

#define LED_RED		'r'
#define LED_GREEN	'g'

// Nios II LED API Macros
#define GET_LED_RED 		IORD_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE)
#define GET_LED_GREEN		IORD_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE)

#define SET_LED_RED(x) 		IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, x)
#define SET_LED_GREEN(x) 	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, x)

#define CLEAR_LED_RED 		IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, 0)
#define CLEAR_LED_GREEN 	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0)

// Function Declarations
	// Sets up LED initial status
void LED_init();
	// Writes value of LED colour by position
		/* Inputs:
		 * color of led - Macro
		 * binary position of led - logic high, rest logic low
		 * desired on or off - Macro
		*/
void LED_write(char colour, uint led_pos, uint is_on);

// Helper Functions
	// Returns led_pos merged with current position, ready to be write to led port
uint set_on_off(uint led_pos, uint current_led_pos, uint is_on);

// Functions to display current pulses as LED lights
void handle_disp_LED(char* p, char io);
void reset_pulse_LED();
void pulse_LED_VS();
void pulse_LED_AS();
void clear_LED_VS();
void clear_LED_AS();
void pulse_LED_VP();
void pulse_LED_AP();
void clear_LED_VP();
void clear_LED_AP();

void pulse_LED_tick();

// For use with mode 2
	// Displays the read value from UART
void echo_LED_read(char* r);

#endif /* LEDS_H_ */
