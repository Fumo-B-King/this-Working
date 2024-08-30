#include <REGX52.H>
#include "motor.h"
#include "Timer.h"


unsigned char distance;
unsigned char maxdistance = 20;


void main() {

	TMOD &= 0xF0;
	TMOD |= 0x01;
	
while(1) {

	Forward();
	
	ultrasonic();
	
	if (distance <= maxdistance) {
		Left();
		Delay();
		ultrasonic();
		if (distance <= maxdistance) {
			Right();
			Delay();
			Delay();
		}
	}
	else {
		Forward();
	}

	

}
}

