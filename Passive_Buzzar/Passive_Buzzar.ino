int buzzpin = 8, bt = 1, bt2 =2;
void setup() {
pinMode(buzzpin,OUTPUT);
}

void loop() {
digitalWrite(buzzpin,HIGH);
delay(bt2);
digitalWrite(buzzpin,LOW);
delay(bt2);
}
