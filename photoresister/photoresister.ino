int lightpen = A1, dv = 250, gl = 4, rl = 3;
int lightval;
void setup() {
  Serial.begin(9600);
pinMode(lightpen,INPUT);
pinMode(gl,OUTPUT);
pinMode(rl,OUTPUT);
}

void loop() {
lightval = analogRead(lightpen);
Serial.println(lightval);
delay(dv);
lightval = (1023-lightval)*255./1023;
  analogWrite(rl,lightval);


}
