#include <Servo.h>

Servo servo1;
float poten;

void setup() {                         
  Serial.begin(9600);
  servo1.attach(2);
  servo1.write(0);
  
}

void loop() {
 poten = analogRead(A0);
 servo1.write(poten);

 poten = map(poten, 0,1023,0,180);
 servo1.write(poten);

 
 Serial.println(poten);
 delay(300);

}
