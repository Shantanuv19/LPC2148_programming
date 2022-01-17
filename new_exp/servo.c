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
	IODIR0 = (1<<2);
	while(1)
	{
		IOSET0 = (1<<2);
		servodelay(90);
		IOCLR0 = (1<<2);
		delay(10000);
		
		IOSET0 = (1<<2);
		servodelay(-90);
		IOCLR0 = (1<<2);
		delay(10000);
		
		IOSET0 = (1<<2);
		servodelay(180);
		IOCLR0 = (1<<2);
		delay(2000);
	}
}
