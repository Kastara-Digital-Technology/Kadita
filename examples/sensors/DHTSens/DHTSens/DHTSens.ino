#include <Kadita.h>

DHTSens dht(2, DHT22);

float temperature, humidity;

void setup() {
  Serial.begin(9600);
  dht.init();
}

void loop() {
  dht.update();
  temperature = dht.getValueTemperature();
  humidity = dht.getValueHumidity();
  Serial.print("| temperature: ");
  Serial.print(temperature);
  Serial.print("| humidity: ");
  Serial.print(humidity);
  Serial.println();
  delay(1000);
}
