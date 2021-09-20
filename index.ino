#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int sayac=0;
void setup()
{
lcd.begin(16,2);
lcd.print("Arduino");
void loop()
{
lcd.setCursor(0,1);
delay(1000);
lcd.print(sayac);
sayac++;
}
}