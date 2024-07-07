#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include  <Ultrasonic.h>


LiquidCrystal_I2C lcd(0x27,16,2);
Ultrasonic ultrasonic(12, 13);  //O sensor ultrassônico mede distância entre 2cm e 4 metros, o sensor retorna as medidas em cm
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
lcd.print(distance);    //Exibe no display apenas a distância medida sem identificação da medida de comprimento usada
lcd.print(" cm");       //Adiciona a terminação 'cm' para o melhor entendimento da distância calculada
delay(500);             //Adiciona um atraso de 0,5s na impressão da distância
lcd.clear();
  }
