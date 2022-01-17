#include<lpc214x.h>
void delay(int a);
int main()
{
	IODIR0 = (1<<17);
	while(1){													//for(;;)
		IOSET0 = (1<<17);
		delay(1000);
		IOCLR0 = (1<<17);
		delay(1000);
	}
	return 0;
}
void delay(int a)
{
	unsigned int i,j;
	for(i=0; i<a; i++)
	for(j=0; j<=1275; j++);
}
	
