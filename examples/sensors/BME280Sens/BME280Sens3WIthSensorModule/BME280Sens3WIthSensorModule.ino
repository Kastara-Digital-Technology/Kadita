#include <Kadita.h>

SensorModule sensor;

float value[4];

void setup() {
  Serial.begin(9600);
  sensor.addModule(new BME280Sens());
  sensor.init();
}

void loop() {
  sensor.update();
  sensor.getModule(0).getValue(value);
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
