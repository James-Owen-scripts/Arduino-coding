byte myByte=B00001000;
int dt=500;

void setup() {
Serial.begin(115200);
}

void loop() {
Serial.println(myByte,BIN);
myByte=myByte+1;
delay(dt);
}
