#include <DHT.h>
#include <DHT_U.h>
#define DHT11_PIN 8
#define DHTTYPE DHT11
DHT  dht(DHT11_PIN,DHTTYPE);
int temperature , humidite;
void setup() {
Serial.begin(9600);
dht.begin();
}

void loop() {
 temperature = dht.readTemperature();
 humidite = dht.readHumidity();
 Serial.print("la temperature est a =");
 Serial.print(temperature);
 Serial.println("°C");
 Serial.print("l'humidité est a =");
 Serial.print(humidite);
 Serial.println("%");
 delay(1000);
}
