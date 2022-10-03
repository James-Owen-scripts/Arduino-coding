int redL = 6, blueL = 11;
int count, timeout = 500;
int Bblink = 5, Rblink = 3;
void setup() {

pinMode(redL,OUTPUT);
pinMode(blueL,OUTPUT);
}

void loop() {
  
for(count=1; count<=Rblink; count++){
    digitalWrite(redL,HIGH);
    delay(timeout);
    digitalWrite(redL,LOW);
    delay(timeout);
}
for(count=1; count<=Bblink; count++){
    digitalWrite(blueL,HIGH);
    delay(timeout);
    digitalWrite(blueL,LOW);
    delay(timeout);
}
}
