#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include  <Ultrasonic.h>


LiquidCrystal_I2C lcd(0x27,16,2);
Ultrasonic ultrasonic(12, 13);
int distance;
 
void setup()
{
 Serial.begin(9600);
 lcd.init();
 lcd.setBacklight(HIGH);
}
 
void loop()
{
lcd.setCursor(0,0);
distance = ultrasonic.read();
lcd.print("      ");
lcd.print(distance);    //Exibe no display as medidas
lcd.print(" cm");
delay(500);
lcd.clear();
  }
