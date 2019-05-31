#include <LiquidCrystal.h>
 
//Defines the ones that are related to display
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup()
{
  //Sets the number of columns and LCD lines
  lcd.begin(16, 2);
}
 
void loop()
{
  //Clean the screen
  lcd.clear();
  //Position the cursor in column 3, line 0;
  lcd.setCursor(3, 0);
  //Send text in quotes to LCD
  lcd.print("Natalya");
  lcd.setCursor(3, 1);
  lcd.print(" I love you");
  delay(5000);
   
  //Scroll left
  for (int pos = 0; pos < 3; pos++)
  {
    lcd.scrollDisplayLeft();
    delay(300);
  }
   
  //Scroll right
  for (int pos = 0; pos < 5; pos++)
  {
    lcd.scrollDisplayRight();
    delay(300);
  }
}
