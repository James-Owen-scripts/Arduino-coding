int numblinks,j, pause = 500;
int L1 = 6;
String msg="How many blinks do you want: ";
String msg2="Your Number is: ";
void setup() {

Serial.begin(9600);
pinMode(L1,OUTPUT);
}

void loop() {
Serial.println(msg);
while (Serial.available()==0){
}
numblinks = Serial.parseInt();
Serial.print(msg2 + numblinks + "\n");
for(j=numblinks;j>0;j=j-1){
  digitalWrite(L1,HIGH);
  delay(pause);
  digitalWrite(L1,LOW);
  delay(pause);
}
}
