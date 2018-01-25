# DHT11
Interfacing DHT11 with Arduino UNO/Mega

DHT11 is a module with two important sensors -Temperature and Humidity. The module is pretty cheap and the accuracy is applaudable.

### Connection:
```
DHT11:
Vcc- Connect this to +5V of Arduino;
GND- Connect this to any ground PIN of the board;
DATA- Connect it to any of the digital PIN except the pin marked with TX and RX.

LCD:
VSS- Connect it to the ground;
VDD/Vcc- Connect it to the 5V from the board;
VO/VEE- Used to vary the contrast using a potentiometer, Connect it to the centre of the potentiometer and the other two as Vcc and GND;
R/W- Connect it to the Ground;
RS- Connect it to any digital PIN;
E- Connect it to any digital PIN;
D4-D7: Connect all these four pins to different digital PINS;
A- Connect it to 5V of the board; and
K- Connect it to the GND of the board.
```
The Tx and Rx pins are used for Serial communication.
In case of Arduino UNO, we have only one set of Tx and Rx which will be internally used by the microcontroller for Serial monitor.
