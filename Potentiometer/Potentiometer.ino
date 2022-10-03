int voltpin = A2, redpin = 9;
int readVal, delayT = 250;
float v2;
void setup() {
Serial.begin(9600);
pinMode(voltpin,INPUT);
pinMode(redpin,OUTPUT);
}

void loop() {
readVal = analogRead(voltpin);
v2 = (5./1023.)*readVal;
Serial.println(v2);
delay(delayT);
if(v2>4.0){
digitalWrite(redpin,HIGH);
  }
else{
digitalWrite(redpin,LOW);
  }
}
