/*
 * UART.c
 *
 *  Created on: 7 Sep 2021
 *      Author: Hao Lin
 */

#include "UART.h"

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void handle_uart(char* s, char* p)
{
	// Author: Unknown Contributor
	// Code taken from: https://community.intel.com/t5/Nios-II-Embedded-Design-Suite/Read-from-UART/m-p/31325
	// Modified by Hao Lin

	// Open up UART as a file with read/write access wile not blocking
	int fd = open(UART_NAME, (int)(O_RDWR | O_NONBLOCK | O_NOCTTY));
	// Associates the file (UART) with a incoming stream.
	FILE* fp = fdopen(fd, "rw+");

	char uart_rxbuffer;
	uint uart_rxcount = 0;

	// Check if the UART is open successfully
	if (fp != NULL)
	{

		// Reads the incoming stream (uart's rxbuffer)
		uart_rxcount = read(fd, (void*)&uart_rxbuffer, sizeof(uart_rxbuffer));

		(*s) = uart_rxbuffer;

		// Reading Debugging Code
//		if(uart_rxcount > 0)
//		{
//			fprintf(fp, "received: ");
//			fprintf(fp, "%c", uart_rxbuffer);
//		}

		if (*p != 'N')
		{
			// Use fprintf to write to file (UART's txbuffer)
			fprintf(fp, "%c", (*p));
		}

		fclose(fp);
	}

	return;
}

// OUTDATED - UART IRQ ATTEMPT //

//void uart_read_interrupts_function(void* context, alt_32 id)
//{
////	uint* temp = (uint*) context;
////	(*temp) = TRUE;
//	printf("In interrupt");
//	return;
//}

//void* uart_init()
//{
//	static uint flag_uart_read = 0;
//	void* p_flag_uart_read = (void*) &flag_uart_read;
//
//	// register the ISR, CONTEXT IS THE PASSED POINTER ARGUMENT
//	alt_irq_register(UART_IRQ, p_flag_uart_read,
//					 (alt_isr_func) uart_read_interrupts_function);
//
//	return p_flag_uart_read;
//}

//void handle_uart(void* p_flag_uart_read)
//{
//	uint* flag_uart_read = (uint*) p_flag_uart_read;
//
//	if (*flag_uart_read)
//	{
//		LED_write(LED_RED, LED_7, HIGH);
//		(*flag_uart_read) = FALSE;
//	}
//}


