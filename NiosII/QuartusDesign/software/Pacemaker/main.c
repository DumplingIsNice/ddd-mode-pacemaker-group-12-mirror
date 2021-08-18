
// CPU Generated Symbolic Names
#include <system.h>
// Interrupt library
#include <sys/alt_irq.h>
// PIO register writing and reading operation
#include <altera_avalon_pio_regs.h>
// Standard I/O
#include <stdio.h>

// Example timeout values in milliseconds
#define AVI_VALUE 300
#define AEI_VALUE 800
#define PVARP_VALUE 50
#define VRP_VALUE 150
#define LRI_VALUE 950
#define URI_VALUE 900

#define BUTTON_0	0x1
#define BUTTON_1	0x2
#define BUTTON_2	0x4
#define BUTTON_ALL 	0x7

#define A_PULSE 'A'
#define V_PULSE 'V'
#define DEFAULT_PULSE 'D'
#define NO_PULSE 'N'

void button_interrupts_function(void* context, alt_32 id)
{
	int* temp = (int*) context;
	(*temp) = IORD_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE);
	// clear the edge capture register
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE, 0);
	return;
}

void* button_setup()
{
	static int flag_btn = 0;
	void* p_flag_btn = (void*) &flag_btn;

	// clears the edge capture register
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE, 0);

	// enable interrupts for buttons
	IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BUTTONS_BASE, BUTTON_0|BUTTON_1|BUTTON_2);

	// register the ISR, CONTEXT IS THE PASSED POINTER ARGUMENT
	alt_irq_register(BUTTONS_IRQ,p_flag_btn, button_interrupts_function);

	return p_flag_btn;
}

void LED_setup()
{

}

void handle_button(int* flag_btn)
{
	static int flag_proc = 0;
	char printChar = NO_PULSE;

	if(flag_proc)
	{
		*flag_btn = 0;
		flag_proc = 0;
	}

	if(*flag_btn){
		switch (*flag_btn)
			{
				case BUTTON_1:
					printChar = V_PULSE;
					break;
				case BUTTON_0:
					printChar = A_PULSE;
					break;
				default:
					printChar = DEFAULT_PULSE;
					break;
			}
		printf("button prints: %c\n", printChar);
		flag_proc = 1;
	}
	return;
}

int main()
{

	printf("Hello from Nios II!\n");

	void* p_flag_btn = button_setup();

	while(1)
		{
			handle_button((int*) p_flag_btn);
//				printf("button prints: %i\n", BUTTON_0);
//				printf("button prints: %i\n", BUTTON_1);
//				printf("button prints: %i\n", BUTTON_2);
//				printf("button prints: %i\n", flag_btn);
		}

	return 0;
}
