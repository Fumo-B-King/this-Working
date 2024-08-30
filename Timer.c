#include <REGX52.H>

extern unsigned char distance;
extern unsigned char maxdistance;

void Delay_u() {
	unsigned char i;
	i = 39;
	while (--i);
}


void ultrasonic() {

	P1_1 = 1;
	Delay_u();
	P1_1 = 0;
	TL0 = 0x00;
	TH0 = 0x00;
	
	while(!P1_4);
	TR1 = 1;
	while(P1_4);
	TR1 = 0;
	
	distance = ((TH1 * 256 + TL1) * 0.034) / 2 + 1;
	
}


