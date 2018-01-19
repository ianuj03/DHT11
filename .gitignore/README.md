# DHT11
Interfacing DHT11 with Arduino UNO/Mega

DHT11 is a module with two important sensors -Temperature and Humidity. The module is pretty cheap and the accuracy is applaudable.

Connection:
Vcc- Connect this to +5V of Arduino;
GND- Connect this to any ground PIN of the board;
DATA- As the name says, this is the data pin so connect it to any of the digital PIN except pin marked with TX and RX.

The Tx and Rx pins are used for Serial communication.
In case of Arduino UNO, we have only one set of Tx and Rx which will be internally used by the microcontroller for Serial monitor.
