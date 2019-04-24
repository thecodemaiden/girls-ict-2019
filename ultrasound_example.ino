#include <US.h>

US ultrasound(8,9);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(ultrasound.read());
  delay(100);
}
