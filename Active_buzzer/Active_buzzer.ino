int buzzpin = 8, dt1=1,dt2=2;
String msg = "Please input your number";
void setup() {
Serial.begin(9600);
pinMode (buzzpin,OUTPUT);
}

void loop() {
for(int j=1;j<=100;j=j++){
  digitalWrite(buzzpin, HIGH);
  delay(dt1);
  digitalWrite(buzzpin, LOW);
  delay(dt1);
}
for(int j=1;j<=100;j=j++){
  digitalWrite(buzzpin, HIGH);
  delay(dt2);
  digitalWrite(buzzpin, LOW);
  delay(dt2);
}
}
