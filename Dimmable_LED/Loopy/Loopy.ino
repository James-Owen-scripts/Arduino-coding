int j , delaytime = 500;
void setup() {
Serial.begin(9600);
}

void loop() {
 for(j=10; j>=1; j=j-1){
 Serial.println(j);
 delay(delaytime);
 }
Serial.println();
}
