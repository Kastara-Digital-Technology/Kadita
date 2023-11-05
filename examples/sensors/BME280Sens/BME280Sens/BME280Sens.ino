#include <Kadita.h>

BME280Sens bme;

float temperature, humidity;

void setup() {
  Serial.begin(9600);
  bme.init();
}

void loop() {
  bme.update();
  temperature = bme.getValueTemperature();
  humidity = bme.getValueHumidity();
  Serial.print("| temperature: ");
  Serial.print(temperature);
  Serial.print("| humidity: ");
  Serial.print(humidity);
  Serial.println();
  delay(1000);  // optional
}
