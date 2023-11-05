#include <Kadita.h>

DS18B20Sens ds(2);

float temperature;

void setup() {
  Serial.begin(9600);
  ds.init();
}

void loop() {
  ds.update();
  temperature = ds.getValueTemperature();
  Serial.print("| temperature: ");
  Serial.print(temperature);
  Serial.println();
  delay(1000);
}
