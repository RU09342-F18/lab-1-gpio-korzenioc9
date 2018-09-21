# Button Blink
The program for enabling LED to turn on or off with the press of a button also requires altering the values of three registers, but different ones. The registers used to enable a resistor on a certain pin were used.

# MSP430G2553
On this board, the LED pin was 1.0 and the button pin is 1.3. The direction of P1.0 (P1DIR) had to be set to 0 in order to make it an output. In order to make the button act as a switch in the circuit, a pull-up resistor had to be enabled for P1.3. This was accomplished by setting BIT3 of the P1REN register to 1. BIT3 of P1OUT was also set to 1 to initilaize the state of the pin.
For button press, a more complex logic statement was required to activate the contents of the if statement when the button experienced a change in state. In this case, the delay cycle serves a slightly different purpose, preventing the LED from changing state multiple times during a single button press. An XOR statement inside of the if statement toggles the state of the LED.

# MSP430FR2311
Switching to this board for button blink requires only one slight alteration in the program. The pin for this microcontroller's button is P1.1 instead of 1.3, so anywhere a 3 was used, a 1 was used instead.
