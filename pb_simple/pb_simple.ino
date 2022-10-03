int buttonpin = 2;
int buttonval;
int dt = 100;
void setup() {
pinMode(buttonpin, INPUT);
digitalWrite(buttonpin,HIGH);
Serial.begin(9600);
}

void loop() {
buttonval = digitalRead(buttonpin);
Serial.print("your Button is: ");
Serial.println(buttonval);
delay(dt);
}
