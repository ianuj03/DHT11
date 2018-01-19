/* This program is used to read the temperature and humidity from DHT11 module using Arduino.
 * Author: Anuj Jain.
 * @ianuj03
 */
 
#include"DHT.h"
DHT dht;
void setup(){
  Serial.begin(9600);//Setting up the baud rate
  dht.setup(7);//connecting Data pin of DHT11 to Digital pin 7.
  Serial.println("Status\tHumidity\tTemperature(C)\tTemperature(F)\tTemperature(k)");
}

float tempc=0,humidity=0;
float tempf(float tempc){
  return (tempc*(9.0/5.0)+32);//Converting to Fahrenheit
}

void loop(){
  if(tempc!=dht.getTemperature()||humidity!=dht.getHumidity()){//Check for change.
    tempc=dht.getTemperature();//Reading temperature in Celsius
    humidity=dht.getHumidity();//Reading Humidity in percentage
    Serial.print(dht.getStatusString());//returns the status of the module.
    Serial.print("\t");
    Serial.print(humidity,2);//Print the value upto two decimal place
    Serial.print("(%)\t\t");
    Serial.print(tempc,2);
    Serial.print("C\t\t");
    Serial.print(tempf(tempc),2);
    Serial.print("F\t\t");
    Serial.print(tempc+273);//Adding 273 to convert into Kelvin
    Serial.println("K");
    delay(1000);//Delay one second
  }
}
