#include <Servo.h>

Servo servo;

void setup() {
  // put your setup code here, to run once:
 servo.attach(2);

 servo.write(15);

delay(1000);
 servo.write(45);
 delay(1000);
}

int direction = 1;
int angle = 0;
void loop() {
  // put your main code here, to run repeatedly:
  servo.write(angle);
  if (angle >= 180) {
    direction = -1;
  }
  if (angle <= 0) {
    direction = 1;
  }
  angle = angle + direction;
  delay(100);
}
