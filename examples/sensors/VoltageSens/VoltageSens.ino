#include <Kadita.h>

VoltageSens volt(A0);

float voltage;

void setup() {
  Serial.begin(9600);
  volt.init();
}

void loop() {
  volt.update();
  voltage = volt.getValueVoltage();
  Serial.print("| voltage: ");
  Serial.print(voltage);
  Serial.println();
  delay(1000);  // optional
}
