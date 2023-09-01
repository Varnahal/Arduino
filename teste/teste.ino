#include <Servo.h>



Servo mt1;
Servo mt2;
Servo mt3;
void setup(){
    mt1.attach(9);
    mt1.write(0);

    mt2.attach(10);
    mt2.write(0);

    mt3.attach(11);
    mt3.write(0);
}
void loop(){
    mt1.write(360);
    mt2.write(360);
    mt3.write(360);
    delay(1000);
    mt1.write(0);
    mt2.write(0);
    mt3.write(0);
    delay(1000);

}