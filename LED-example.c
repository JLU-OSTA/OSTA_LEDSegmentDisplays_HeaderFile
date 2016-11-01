#include <reg51.h>
#include <OSTA_LED.h>

int main(void)
{
	P1 = 0x00;
	P2 = 0x00;
	P1 = OSTALED(5);
	P2 = OSTALEDD(6);
	return 0;
}