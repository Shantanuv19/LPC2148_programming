#include<lpc214x.h>
void delay(int a);
int main()
{   
	IODIR0 = (1<<10)|(1<<12); //led
 while(1)  
  {
   IOSET0 = (1<<10);
			delay(5000);
   IOCLR0 = (1<<12); 
		
   IOCLR0 = (1<<10); 
	 IOCLR0 = (1<<12);
		delay(5000);
		
		IOSET0 = (1<<12);
		delay(5000);
		IOCLR0 = (1<<10);
		delay(5000);
		
		IOCLR0 = (1<<10); 
	 IOCLR0 = (1<<12);
		delay(5000);
  }
 return 0;
}
void delay(int a)
{
	unsigned int i,j;
	for(i=0; i<a; i++)
	for(j=0; j<=1275; j++);
}
