#define _XTAL_FREQ 20000000

#include <pic18F46K22.h>

void main()
{
    
 ANSELB = 0; // Configure AN pins as digital
 TRISB = 0; // PORTB is output
 LATB = 0; // Initialize PORTB
    while(1){
        if (PORTB ==0x00)
        {
            PORTB=0x01;
        }
        else
        {
            PORTB=0x00;
        }
    }
}


