#include <msp430.h> 

#define BIT0 (0x0001)
#define BIT1 (0x0002)
#define BIT2 (0x0004)
#define BIT3 (0x0008)
#define BIT4 (0x0010)
#define BIT5 (0x0020)
#define BIT6 (0x0040)
#define BIT7 (0x0080)
#define BIT8 (0x0100)
#define BIT9 (0x0200)
#define BITA (0x0400)
#define BITB (0x0800)
#define BITC (0x1000)
#define BITD (0x2000)
#define BITE (0x4000)
#define BITF (0x8000)
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    //Setup P1.0 and an output port
    P4DIR = P1DIR | BIT0 ; // bitwise OR 0000 0001 this is the pin 4.0 Green LED

    //Create main loop
    while(1)
    {
        //Toggle the LED
        P4OUT ^= BIT0; //Bitwise EX-OR 0000 0001
    }

}
