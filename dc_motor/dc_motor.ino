int speedp = 5, dir1 = 4, dir2 = 3;
int mspeed = 255;
void setup() {
pinMode(speedp,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
analogWrite(speedp,mspeed);
}
