#include <AFMotor.h>

AF_Stepper stepper1(64,2);
void setup(){
    stepper1.setSpeed(500);
}
void loop(){
    stepper1.step(2048,FORWARD,SINGLE);
    delay(3000);
    stepper1.step(2048,BACKWARD,SINGLE);
}