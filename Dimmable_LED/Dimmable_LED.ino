int gpin = 2;
int pause = 500;
void setup() {
pinMode(gpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(gpin, HIGH);
delay(pause);
digitalWrite(gpin, LOW);
delay(pause);
}
