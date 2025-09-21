#include <Wire.h>
 #include <LiquidCrystal_I2C.h> 
#include "DHT.h"
 #include <Adafruit_BMP085.h> 
#define DHTPIN 7 
#define DHTTYPE DHT11 
#define REDPIN 11 
#define GREENPIN 10 
#define BLUEPIN 9 
LiquidCrystal_I2C lcd(0x3F,16,2); 
const int tempmax = 40; 
const int tempmin = -10; 
Adafruit_BMP085 bmp; 
DHT dht(DHTPIN, DHTTYPE); 
void setup() 
{ Serial.begin(9600); 
lcd.init(); 
dht.begin() ; 
lcd.begin(16,2); 
lcd.clear(); 
lcd.print("bonjour..");
 bmp.begin(); 
while (!bmp.begin())
 Serial.println('error'); 
Serial.println("DHT11 TEST"); 
pinMode(REDPIN, OUTPUT); 
pinMode(GREENPIN, OUTPUT);
 pinMode(BLUEPIN, OUTPUT); } 
void loop() 
{ int lumiValue = analogRead(A0); 
int lumilcdValue = map(lumiValue,0,1024,0,100);
 int humi = dht.readHumidity();
 float tempDHT = dht.readTemperature();
 float tempBMP = bmp.readTemperature();
 float tmoy = ((tempBMP + tempDHT)/2);
 int range = map(tmoy,tempmin, tempmax,0, 5);
 switch (range) { case 1: //pour 0°C à 10°C On fait du bleu foncé 
analogWrite(BLUEPIN,255); 
analogWrite(REDPIN,0); 
analogWrite(GREENPIN,0); 
Serial.println("Cas 1"); 
Serial.println("0*C - 10*C");
 break;
 case 2: //pour 10°C à 20°C On fait du bleu clair 
analogWrite(BLUEPIN,255); 
analogWrite(REDPIN,0); 
analogWrite(GREENPIN,230); 
Serial.println("Cas 2"); 
Serial.println("10*C - 20*C");
 break; 
case 3: //pour 20°C à 30°C On fait du vert 
analogWrite(BLUEPIN,0); 
analogWrite(REDPIN,0); 
analogWrite(GREENPIN,255); 
Serial.println("Cas 3"); 
Serial.println("20*C - 30*C"); 
break; 
case 4: //pour 30°C à 40°C On fait du orange 
analogWrite(BLUEPIN,0); 
analogWrite(REDPIN,220); 
analogWrite(GREENPIN,50); 
Serial.println("Cas 4"); 
Serial.println("30*C - 40*C"); 
break; 
case 5: //pour 40°C et plus on fait du rouge 
analogWrite(BLUEPIN,0); 
analogWrite(REDPIN,255); 
analogWrite(GREENPIN,0); 
Serial.println("Cas 5"); 
Serial.println("40*C & +"); 
break; }
 lcd.clear(); 
lcd.setCursor(0, 0); 
lcd.print(tmoy); 
lcd.print("*C"); 
lcd.setCursor(0, 1); 
lcd.print("%Humi:"); 
lcd.print(humi); 
delay(3000); 
lcd.clear(); 
lcd.setCursor(0, 0); 
lcd.print("Pression: "); //On affiche la pression atmosphérique 
lcd.print(bmp.readPressure()); //on lit la valeur de pression du BMP180 
lcd.print("Pa"); //On affiche l'unité de pression : Pascal 
lcd.setCursor(0, 1); 
lcd.print("%Lumi:"); //On affiche le % de lumiere 
lcd.print(lumilcdValue); 
delay(15000); 
lcd.clear(); 
}
