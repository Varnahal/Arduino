#include <Servo.h>



Servo mt1;
void setup(){
    mt1.attach(9);
    mt1.write(0);
}
void loop(){
    mt1.write(80);
    delay(600);
    mt1.write(0);
    delay(600);

}