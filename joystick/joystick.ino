int X = A1, Y = A3, sw = 8;
int potvalx, potvaly, swread;
int dl = 250;
void setup() {
Serial.begin(9600);
pinMode(X,INPUT);
pinMode(Y,INPUT);
pinMode(sw,INPUT);
digitalWrite(sw,HIGH);
}

void loop() {
potvalx = analogRead(X);
potvaly = analogRead(Y);
swread = digitalRead(sw);
Serial.println(potvalx);
Serial.println(potvaly);
Serial.println(swread);
delay(dl);
}
