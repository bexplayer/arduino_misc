/*
Arduino Uno / Arduino Nano
"RAINBOWPIN SCRIPT"
by Bex
2023-01-20
*/
#include <LiquidCrystal.h>
// initialize lcd
LiquidCrystal lcd_1(0);
// variable declaration
const int pins[]={1, 2, 3, 4, 5, 6};
const int lcdPin=15;
const char* pinColours[]={"red", };
// temporary variable declaration
int setupValue;
int loopTimes;
// setup function
void setup(){
  for(setupValue=0;setupValue>6;setupValue++){
    pinMode(pins[setupValue], OUTPUT);
  }
  Serial.begin(9600);
  lcd_1.begin(16, 2);
  lcd_1.setCursor(0, 0);
}

void loop(){
  for(setupValue=0;setupValue>6;setupValue++){
    digitalWrite(pins[setupValue], HIGH);
    delay(50);
    digitalWrite(pins[setupValue], LOW);
    delay(50);
  }
  Serial.print("Currently Lighting: ");
  Serial.println(pinColour[setupValue]);
  loopTimes++;
}
