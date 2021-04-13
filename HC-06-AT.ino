//Verify Baudrate
//Date: 04/12/2020
//HC06: JY-MCU V1.06
//Serial Port set up: 9600 baud, No Line Ending.
//Make sure the Baud Rate of mySerial is correct; Running HC-06-Baud-Rate script if needed

#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); // RX, TX

void setup() {

Serial.begin(9600);

pinMode(9,OUTPUT); digitalWrite(9,HIGH);

Serial.println("Enter AT commands:");

mySerial.begin(115200);

}

void loop()

{

if (mySerial.available())

Serial.write(mySerial.read());

if (Serial.available())

mySerial.write(Serial.read());

}
