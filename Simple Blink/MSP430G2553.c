/*
*created by Cameron Korzeniowski
*9/11/2018
*/

#include <msp430.h>

int main() {
    WDTCTL = WDTPW | WDTHOLD; // STOP WATCHDOG TIMER
    P1SEL &= ~BIT0;           // setting P1SEL and P1SEL2 to 0 allows P1DIR to perform I/O operations
    P1SEL2 &= ~BIT0;           
    P1DIR |= BIT0;            // sets P1DIR to 1, making it an output
while(1){                     //
    P1OUT ^= BIT0;            // toggle the value of P1OUT to blink the LED
__delay_cycles(1000000);      // This line of code 'distracts' the processor with meaningless tasks to reduce the LED blink rate.
    }                         // The higher the number, the longer the delay and blink rate
return(0);
}
