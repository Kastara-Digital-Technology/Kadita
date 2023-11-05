#include <Kadita.h>

LDRSens ldr(2);

float adc;

void setup() {
  Serial.begin(9600);
  ldr.init();
}

void loop() {
  ldr.update();
  adc = ldr.getValueAdc();
  Serial.print("| adc: ");
  Serial.print(adc);
  Serial.println();
  delay(1000);  // optional
}
