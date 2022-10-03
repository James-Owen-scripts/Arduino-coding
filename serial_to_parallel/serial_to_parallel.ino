int latchPin=11;
int clockPin=9;
int dataPin=12;

byte LEDs=0xFF;

void setup() {
Serial.begin(115200);
pinMode(latchPin,OUTPUT);
pinMode(dataPin,OUTPUT);
pinMode(clockPin,OUTPUT);
}

void loop() {
digitalWrite(latchPin,LOW);
shiftOut(dataPin,clockPin,LSBFIRST,LEDs);
digitalWrite(latchPin,HIGH);
}
