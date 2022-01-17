#include<lpc214x.h>
int main()
{
	IODIR0 = (0<<4)|(1<<5);
	{
		while(1)
		{
			if(!(IOPIN0&(1<<4)))
			{
				IOSET0 = (1<<5);
			}
			else
			{
				IOCLR0 = (1<<5);
			}
		}
	}
}
