int trigpin=12;
int echopin=11;
int pingtraveltime;
float distance;

void setup() {
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
Serial.begin(115200);
}

void loop() {
digitalWrite(trigpin,LOW);
delayMicroseconds(10);
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);
pingtraveltime=pulseIn(echopin,HIGH);
distance = pingtraveltime*(4./239.);
Serial.println(distance);
delay(200);
}
