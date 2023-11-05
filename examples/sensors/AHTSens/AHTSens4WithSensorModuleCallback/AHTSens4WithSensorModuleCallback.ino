#include <Kadita.h>

SensorModule sensor;

float value[2];

void setup() {
  Serial.begin(9600);
  sensor.addModule(new AHTSens());
  sensor.init();
}

void loop() {
  sensor.update(sensorCallback);
  delay(1000);  // optional
}

void sensorCallback() {
  sensor.getModule(0).getValue(value);
  Serial.print("| temperature: ");
  Serial.print(value[AHT_SENS_TEMPERATURE]);
  Serial.print("| humidity: ");
  Serial.print(value[AHT_SENS_HUMIDITY]);
}
