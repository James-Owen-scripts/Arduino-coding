int pb1 = 12, pb2 = 11, rl = 6, buzz = 2;
int buttonval1, buttonval2, ledbright = 0;
int dt = 100;
void setup() {
pinMode(pb1,INPUT);
pinMode(pb2,INPUT);
pinMode(rl,OUTPUT);
Serial.begin(9600);
}

void loop() {
buttonval1 = digitalRead(pb1);
buttonval2 = digitalRead(pb2);
if (buttonval1 == 0){
  ledbright=ledbright + 5;
}
if (buttonval2 == 0){
  ledbright=ledbright - 5;
}
if (ledbright>=255){
  ledbright=255;
  digitalWrite(buzz,HIGH);
  delay(dt);
  digitalWrite(buzz,LOW);
}
if (ledbright<0){
  ledbright=0;
}
analogWrite(rl,ledbright);
Serial.print(buttonval1);
Serial.println(ledbright);
delay(dt);
}
