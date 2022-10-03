int tiltPin = 2, L1 =8, L2 = 9;
int tiltVal;
void setup() {
pinMode(tiltPin,INPUT);
pinMode(L1,OUTPUT);
pinMode(L2,OUTPUT);
digitalWrite(tiltPin,HIGH);
Serial.begin(9600);
}

void loop() {
tiltVal = digitalRead(tiltPin);
Serial.println(tiltVal);

  if(tiltVal == 1){
    digitalWrite(L1,HIGH);
    digitalWrite(L2,LOW);
  }
  else{
    digitalWrite(L1,LOW);
    digitalWrite(L2,HIGH);
  }
}
