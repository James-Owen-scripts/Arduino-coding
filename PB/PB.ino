int rl = 8, button = 12, j=1;
int buttonread;
int dt = 250;
void setup() {
 Serial.begin(9600);
pinMode(rl, OUTPUT);
pinMode(button, INPUT);
}

void loop() {
buttonread = digitalRead(button);
Serial.println(j);
if(buttonread==0){
  j++;
  delay(dt);
}
if(j%2==0){
  digitalWrite(rl,HIGH);
}
else
digitalWrite(rl,LOW);
}
