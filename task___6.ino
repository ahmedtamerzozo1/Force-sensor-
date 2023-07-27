#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(39,16,2);
int force;
int forcesensor=A0;
void setup() { 
pinMode(forcesensor,INPUT);
lcd.init ();
lcd.backlight ();
lcd.print ("loading force..");
delay (500);
lcd. clear();
lcd.print("Reading=");
 }
void loop(){
force=analogRead(forcesensor);
lcd.setCursor(9,0);
lcd.print(force);
}