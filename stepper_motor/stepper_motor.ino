#include <Stepper.h>
int stepsperrev = 2048;
int motspeed = 10, dt = 500;
int pb =12,pbval;
int pbold = 1;
Stepper mystepper(stepsperrev, 8,10,9,11);
void setup() {
Serial.begin(9600);
mystepper.setSpeed(motspeed);
pinMode(pb, INPUT);
digitalWrite(pb,HIGH);

}

void loop() {

pbval = digitalRead(pb);
  if(pbval == 0 && pbold == 1){
  pbold = pbval;
  mystepper.step(stepsperrev);
  pbval = 1;
  }
  if(pbval == 0 && pbold == 0){
    mystepper.step(-stepsperrev);
    pbold = 1;
}
}
