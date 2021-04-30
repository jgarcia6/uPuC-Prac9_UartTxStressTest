#include <avr/io.h>
#include “UART.h”

int main( void )
{
    UART_Ini(0,1000000,8,0,1);
    UART_getchar(0);
    UART_clrscr(0);
    // Randomly generate the array of teardrop's position and length
    while(1) 
    {
        // Display all teardrops
        // Reuse ms SW-delay, and adjust display period as desired.
        delay(100);
    }
}
