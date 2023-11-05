#include <Kadita.h>

HX711Sens hx(2, 3);

float weight;

void setup() {
  Serial.begin(9600);
  hx.init();
}

void loop() {
  hx.update();
  weight = hx.getValueWeight();
  Serial.print("| weight: ");
  Serial.print(weight);
  Serial.println();
  delay(1000);  // optional
}
