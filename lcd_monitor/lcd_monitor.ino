  #include <LiquidCrystal.h>
  int rs=7;
  int en=8;
  int d4=9;
  int d5=10;
  int d6=11;
  int d7=12;

  int kelsey;
  int y = 0;

  String op;

  LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

  void setup() {
  lcd.begin(16,2);
  Serial.begin(115200);
  }

  void loop() { 
  if(y==0){
    lcd.clear();  
    lcd.setCursor(0,0);
    lcd.print("Hello Kelsey");
    lcd.setCursor(0,1);
    lcd.print("James Loves You");
    delay(4000);
  lcd.clear(); 
  y=1;  
  }
  else{
    kelsey = rand()%32;
    for(int i = 0;i<=20;i=i+15){ 
    lcd.clear();
    String substring = loveyou().split(" ");    
    lcd.setCursor(0,0);
    lcd.print(substring);
    delay(2000);
    }
      lcd.clear(); 
      y=0;   
  }
  }

String loveyou(){         
        String You="";
        switch(kelsey){
            case 0:
             You = "Your little hoppies whenever you're happy to see me";
             break;
            case 1:
             You = "When you rest your head on my chest"; 
             break;
            case 2:
             You = "Telling me everything and trusting me with your secrets"; 
             break;
            case 3:
             You = "Getting me to go to the flower festival"; 
             break;
            case 4:
             You = "When you BORROW my hoodies"; 
             break;
            case 5:
             You = "When you take me on fun hikes"; 
             break;
            case 6:
             You = "Your love for animals"; 
             break;
            case 7:
             You = "When you go for walks with me"; 
             break;
            case 8:
             You = "You foolishly thinking that you love my more I love you more by the way"; 
             break;
            case 9:
             You = "Your cuddles"; 
             break;
            case 10:
             You = "You are down for adventures at any time"; 
             break;
            case 11:
             You = "You always look after me when I'm sad"; 
             break;
            case 12:
             You = "When you feed me"; 
             break;
            case 13:
             You = "going to the gym with you"; 
             break;
            case 14:
             You = "Telling me everything about your life"; 
             break;
            case 15:
             You = "Your Hugs"; 
             break;
            case 16:
             You = "Your Kisses"; 
             break;
            case 17:
             You = "you have the best smilies"; 
             break;
            case 18:
             You = "You're beautiful eyes"; 
             break;
            case 19:
             You = "when you're being goosy"; 
             break;
            case 20:
             You = "you're monkey buisness"; 
             break;
            case 21:
             You = "When you're being bug"; 
             break;
            case 22:
             You = "Showing me places in Kamloops"; 
             break;
            case 23:
             You = "Meeting my mom even though you were scared"; 
             break;
            case 24:
             You = "Getting to hold your hand"; 
             break;
            case 25:
             You = "Being a great cat mom to Bean"; 
             break;
            case 26:
             You = "Being my Bubs"; 
             break;
            case 27:
             You = "Your pouty face"; 
             break;
            case 28:
             You = "Bringing me to meet your family"; 
             break;
            case 29:
             You = "When you show me music"; 
             break;
            case 30:
             You = "your dancing"; 
             break;
            case 31:
             You = "When you make me food"; 
             break;
            case 32:
             You = "When you gave me the jar of I love yous"; 
             break;
        }
        return You;
}
