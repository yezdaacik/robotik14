#include <Servo.h>

// C++ code
//
Servo servo1;
void setup()
{
  servo1.attach(2);
}

void loop()
{
 servo1.write(0);
  delay(1000);
  servo1.write(30);
  delay(1000);
  servo1.write(60);
  delay(1000);
  servo1.write(90);
  delay(1000);
  servo1.write(150);
  delay(1000);
  servo1.write(160);
  delay(1000);
}