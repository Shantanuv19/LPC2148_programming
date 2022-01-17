#include<lpc214x.h>
void delay(int a);
int main()
{
	IODIR0 = (1<<2);
	while(1)
	{
		IOSET0 = (1<<2);
		delay(5000);
		
		IOCLR0 = (1<<2);
		delay(5000);
	}
}
void delay(int a)
{
	unsigned int i, j;
	for(i=0;i<a;i++)
	for(j=0;j<1275;j++);
}
