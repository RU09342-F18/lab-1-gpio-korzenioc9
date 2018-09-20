#include <msp430.h>

int main() {
    WDTCTL = WDTPW | WDTHOLD; // STOP WATCHDOG TIMER
    P1SEL &= ~BIT0;           //
    P1SEL2 &= ~BIT0;           //
    P1DIR |= BIT0;            //
while(1){                     //
    P1OUT ^= BIT0;            //
__delay_cycles(1000000);      // This line of code 'distracts' the processor with meaningless tasks to reduce the LED blink rate.
    }
return(0);
}
