
## Version
* Info: HC-06 Baud Rate | Date: 4/2021
* Developer: HHH
## Introduction
Main task: communicate with HC-06 in AT mode to configure baud rate, name, password, etc. 

Notice that it happened to a lot of people including myself that I can't get to AT Mode using HC-06. It's mainly due to the wrong baud rate set up when trying to commnunicate with the HC-06.

Different than HC-05, HC-06 is in the AT mode by default when it's not connected to a Master. The only way to configure HC-06 is to directly connect to it and send AT commands, no need to hold button or set High/Low to any pins. The red LED indicator keeps blinking during an initial turn on showing that it's in the AT Mode.  


## Connection
 HC06 -> Arduino Uno
1. VCC ->5V
2. GND ->GND
3. TXD ->Pin#2
4. RXD -> Voltage Divider (1k in series with 2k resistors) to Pin#3
		
## Component
1. HC-06 JY-MCU V1.06
2. Arduino Uno
3. 3x 1k resistor

## Picture for reference


![Circuit Set up](https://github.com/HHH-01/HC-06-AT/blob/9cec5774cba77e4e0989d676fae63cead8ab7ce8/Images/Circuit%20Set%20Up.jpg)

![Serial Outout](https://github.com/HHH-01/HC-06-AT/blob/0ef8bf7c0b78a6d63a81401c7b092170262965c4/Images/SerialOutput.PNG)
