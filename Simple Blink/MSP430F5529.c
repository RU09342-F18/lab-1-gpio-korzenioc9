/*
*created by Cameron Korzeniowski
*9/11/2018
*/

#include <msp430.h>

int main(void) {
WDTCTL = WDTPW | WDTHOLD; //stop watchdog timer
P1SEL &= ~BIT0; // sets P1DIR to handle GPIO
P1DIR |= BIT0; // Sets direction of P1DIR as output
while(1)
{
P1OUT ^= BIT0; // toggles P1OUT to blink the LED
_delay_cycles(100000); // determines the blink rate of the LED
}
return 0;
}
