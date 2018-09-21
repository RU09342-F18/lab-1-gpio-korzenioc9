# Multiple Blink
The same types of registers that were used for simple blink were used for multiple blink. However, in this case registers had to be altered for two seperate LEDs.

# MSP430G2553
The pins correleating to the LEDs on this board are pins 1.0 and 1.6. In order to enable these pins to be used for I/O, P1SEL and P1SEL2 have to be set to 0s for P1.0 and 1.6. Then P1DIR had to be set to 0 for both of these bits to make them outputs. Finally, the values of the P1OUTs for both bits had to be initialized to ensure the LEDs blink at the desired rates.
The while loop for blinking multiple LEDs is a bit more complex than that of simple blink. Two variables were created, assigned values, and incremented using the -- function. The starting value assigned to each variable determines the blink rate of each LED, with a higher number meaning a faster blink rate. In two if statements in the while loop, there are XOR statements with the respective bit, 1 or 6, to toggle the state of the LED once they reach different, separated values. Finally, the variables are reset to their initial values within the if statement.

# MSP430F5529
There are two primary differences when it comes to multiple blink between the F5529 and G2553. Once again, just as in simple blink, there are not two select registers that need to be set to 0 in order for the respective pins to be enabled to interface with I/O, but only one. Also, the second LED is linked to pin 4.7 instead of pin 1.6, while the first LED is P1.0 on both boards.
