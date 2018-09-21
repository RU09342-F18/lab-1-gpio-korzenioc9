# Simple Blink

For this portion of the lab I used boards MSP430G2553 and MSP430F5529.
In order for simple blink to be functional, there were 3-4 registers on both boards whose values needed to be altered.

# MSP430G2553
Technically, this board requires 4 registers to be changed in order for simple blink to work. These were P1SEL, P1SEL2, P1DIR, and P1OUT. By setting the values of the 1.0 bits in the select registers to 0s, it enables pin 1.0 to be used for GPIO purposes. Setting P1.0's direction register to 0 designates this pin as an output. P1OUT is used in an XOR statement in a while loop, toggling the state of the LED at a rate determined by the delay cycles, which in this case was 1000000.

# MSP430F5529
The primary difference between this board and the G2553 is that there are only 3 registers that need to be changed to enable simple blink. The register that is not used on this board is P1SEL2, as it is not needed to set P1.0 as an I/O. Both boards shared the same LED pin number P1.0.
