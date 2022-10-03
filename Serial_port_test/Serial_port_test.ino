int j = 1;
int waitT = 750;
String myString = " + ";
int x=3, y=7, z;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {

z=x+y;  
Serial.println(x + myString + y + " = " + z);
delay(waitT);
}
