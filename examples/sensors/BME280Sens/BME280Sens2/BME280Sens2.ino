#include <Kadita.h>

BME280Sens bme;

float value[4];

void setup() {
  Serial.begin(9600);
  bme.init();
}

void loop() {
  bme.update();
  bme.getValue(value);
  Serial.print("| temperature: ");
  Serial.print(value[BME_SENS_TEMPERATURE]);
  Serial.print("| humidity: ");
  Serial.print(value[BME_SENS_HUMIDITY]);
  Serial.print("| pressure: ");
  Serial.print(value[BME_SENS_PRESSURE]);
  Serial.print("| altitude: ");
  Serial.print(value[BME_SENS_ALTITUDE]);
  Serial.println();
  delay(1000);  // optional
}
