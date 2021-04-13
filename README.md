
## Version
* Info: HC-06 Baud Rate
* Developer: HHH
* Email: harry.hoa.huynh.01@gmail.com
* Date: 4/2021

## Introduction
Task:
1. HC-06 in AT mode to configure it
* Notice that it happened to a lot of people including myself that I can't get to AT Mode. It's mainly due to the wrong baud rate set up when trying to commnunicate with the HC-06.


## Connection
 HC06 -> Arduino Uno
1. VCC ->5V
2. GND ->GND
3. TXD ->Pin#2
4. RXD -> Voltage Divider (1k in series with 2k resistors) to Pin#3
		
## Component
1. HC-06 JY-MCU V1.06
2. Arduino Uno

## Picture for reference


![Circuit Set up](Images/Circuit Set Up.jpg)

![Serial Outout](https://github.com/HHH-01/HC-06-AT/blob/0ef8bf7c0b78a6d63a81401c7b092170262965c4/Images/SerialOutput.PNG)
