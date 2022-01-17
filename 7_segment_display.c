#include<lpc214x.h>
void delay(int a);
int main()
{   
  IODIR0 = (0<<12); 
	IODIR0 = (1<<3)|(1<<4)|(1<<5)|(1<<6)|(1<<7)|(1<<8)|(1<<9);
 while(1)
 {
  if(!(IOPIN0&(1<<12)))   
  {
   
		IOSET0 = (1<<3);
		IOSET0 = (1<<4);
		IOSET0 = (1<<5);
		IOSET0 = (1<<6);
		IOSET0 = (1<<7);
		IOSET0 = (1<<8);
		IOCLR0 = (1<<9);
		delay(1000);
		
			IOCLR0 = (1<<3);
			IOSET0 = (1<<4);
			IOSET0 = (1<<5);
			IOCLR0 = (1<<6);
			IOCLR0 = (1<<7);
			IOCLR0 = (1<<8);
			IOCLR0 = (1<<9);
				delay(1000);
		
		IOSET0 = (1<<3);
		IOSET0 = (1<<4);
		IOCLR0 = (1<<5);
		IOSET0 = (1<<6);
		IOSET0 = (1<<7);
		IOCLR0 = (1<<8);
		IOSET0 = (1<<9);
		delay(1000);
		
		IOSET0 = (1<<3);
		IOSET0 = (1<<4);
		IOSET0 = (1<<5);
		IOSET0 = (1<<6);
		IOCLR0 = (1<<7);
		IOCLR0 = (1<<8);
		IOSET0 = (1<<9);
		delay(1000);
		
		IOCLR0 = (1<<3);
		IOSET0 = (1<<4);
		IOSET0 = (1<<5);
		IOCLR0 = (1<<6);
		IOCLR0 = (1<<7);
		IOSET0 = (1<<8);
		IOSET0 = (1<<9);
		delay(1000);
		
		IOSET0 = (1<<3);
		IOCLR0 = (1<<4);
		IOSET0 = (1<<5);
		IOSET0 = (1<<6);
		IOCLR0 = (1<<7);
		IOSET0 = (1<<8);
		IOSET0 = (1<<9);
		delay(1000);
		
		IOSET0 = (1<<3);
		IOCLR0 = (1<<4);
		IOSET0 = (1<<5);
		IOSET0 = (1<<6);
		IOSET0 = (1<<7);
		IOSET0 = (1<<8);
		IOSET0 = (1<<9);
		delay(1000);
		
		IOSET0 = (1<<3);
		IOSET0 = (1<<4);
		IOSET0 = (1<<5);
		IOCLR0 = (1<<6);
		IOCLR0 = (1<<7);
		IOCLR0 = (1<<8);
		IOCLR0 = (1<<9);
		delay(1000);
		
		IOSET0 = (1<<3);
		IOSET0 = (1<<4);
		IOSET0 = (1<<5);
		IOSET0 = (1<<6);
		IOSET0 = (1<<7);
		IOSET0 = (1<<8);
		IOSET0 = (1<<9);
		delay(1000);
		
		IOSET0 = (1<<3);
		IOSET0 = (1<<4);
		IOSET0 = (1<<5);
		IOSET0 = (1<<6);
		IOCLR0 = (1<<7);
		IOSET0 = (1<<8);
		IOSET0 = (1<<9);
		delay(1000);
  }
  else 
  {
		IOCLR0 = (1<<3);
		IOCLR0 = (1<<4);
		IOCLR0 = (1<<5);
		IOCLR0 = (1<<6);
		IOCLR0 = (1<<7);
		IOCLR0 = (1<<8);
		IOCLR0 = (1<<9);
		delay(1000);
  }
 }
 return 0;
}
void delay(int a)
{
	unsigned int i,j;
	for(i=0; i<a; i++)
	for(j=0; j<=1275; j++);
}
