#include <Servo.h>

//#include <ESP32_Servo.h>

Servo myServo;

int servopin = 18;
int pos = 0;
void setup() {
  myServo.attach(servopin);
  // put your setu[ code here, to run once:
}

void loop() {

  for(pos=0; pos<=180; pos+=1){//you can change the position value
    myServo.write(pos);
    delay(5);
  }

  for(pos=180; pos>=0; pos-=1) {
    myServo.write(pos);
    delay(5);
  }
    
}
