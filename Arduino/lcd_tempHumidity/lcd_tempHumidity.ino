#include<LiquidCrystal.h>
#include<DHT.h>//Need to download this library if not done
DHT dht;
LiquidCrystal lcd(8,9,2,3,4,5);//rs,en,d4,d5,d6,d7
void setup(){
  lcd.begin(16,2);//column,row
  dht.setup(7);//Connecting data pin of the DHT11 to digital pin 7
}
float tempc=0,humidity=0;
void loop(){
  if(tempc!=dht.getTemperature()||humidity!=dht.getHumidity()){//Checking for the change
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Temp:");
    lcd.print(dht.getTemperature());//Printing Temperature in Celsius
    lcd.print("C");
    lcd.setCursor(1,0);
    lcd.print("Humidity:");
    lcd.print(dht.getHumidity());//Printing Humidity in Percentage
    lcd.print("%");
  }
}

