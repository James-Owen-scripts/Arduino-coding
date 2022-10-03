#include <Servo.h>
int servopin = 9;
int servopos;
int pos = A1, val;
Servo myservo;

void setup() {
Serial.begin(9600);
myservo.attach(servopin);
pinMode(A1,INPUT);
}

void loop() {
 val=analogRead(pos);
servopos = (180./1023.)*val; 
myservo.write(servopos);
Serial.println(servopos);
}
