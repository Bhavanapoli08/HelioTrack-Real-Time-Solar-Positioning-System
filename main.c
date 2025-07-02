#include <reg51.h>
#include <intrins.h>

sbit servo_pin = P2^0;
sbit LDR1 = P1^0;
sbit LDR2 = P1^1;
sbit LDR3 = P1^2;

void delay(unsigned int);
void servo_delay(unsigned int);

void main() {
    servo_pin = 0;
    P1 = 0;
    while(1) {
        if (LDR1 == 1) {
            servo_pin = 1;
            servo_delay(50);
            servo_pin = 0;
            delay(1000);
        }
        if (LDR2 == 1) {
            servo_pin = 1;
            servo_delay(123);
            servo_pin = 0;
            delay(1000);
        }
        if (LDR3 == 1) {
            servo_pin = 1;
            servo_delay(166);
            servo_pin = 0;
            delay(1000);
        }
    }
}
