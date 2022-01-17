#include<lpc214x.h>
void delay(int a)
{
	int i, j;
	for(i=0;i<a;i++)
	for(j=0;j<360;j++);
}
void servodelay(int a)
{
	int i,j;
	for(i=0;i<a;i++)
	for(j=0;j<360;j++);
}
void main()
{
	IODIR0 = (1<<2)|(1<<3)|(1<<4)|(1<<5);
	while(1)
	{
		IOSET0 = (1<<2);
		IOSET0 = (1<<3);
		IOCLR0 = (1<<4);
		IOCLR0 = (1<<5);
		delay(1000);
		
		IOCLR0 = (1<<2);
		IOSET0 = (1<<3);
		IOSET0 = (1<<4);
		IOCLR0 = (1<<5);
		delay(1000);
		
		IOCLR0 = (1<<2);
		IOCLR0 = (1<<3);
		IOSET0 = (1<<4);
		IOSET0 = (1<<5);
		delay(1000);
		
		IOSET0 = (1<<2);
		IOCLR0 = (1<<3);
		IOCLR0 = (1<<4);
		IOSET0 = (1<<5);
		delay(1000);
		
	}
}
