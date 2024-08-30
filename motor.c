#include <REGX52.H>

void Delay()		//@11.0592MHz
{
	unsigned char k;
	unsigned char i, j;
	for (k = 0; k < 10; k++) {
		i = 180;
		j = 73;
		do{
			while(--j);
		} while(--i);
	}
}



void Forward() {
	P0 = 0xAA;
}

void Backward() {
	P0 = 0x55;
}

void Left() {
	P0 = 0x5A;
}

void Right() {
	P0 = 0xA5;
}
