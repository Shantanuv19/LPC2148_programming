#include<lpc214x.h>
void delay(int a);
int main()
{   
  IODIR0 = (0<<9); //switch
	IODIR0 = (1<<10)|(1<<12)|(1<<11)|(1<<13)|(1<<1)|(1<<2)|(1<<3)|(1<<4); //led
 while(1)
 {
  if(!(IOPIN0&(1<<9)))   
  {
   IOSET0 = (1<<10);
			delay(1000);
   IOCLR0 = (1<<12); 
	 IOCLR0 = (1<<11);
	 IOCLR0 = (1<<13);
		
   IOCLR0 = (1<<10); 
	 IOSET0 = (1<<11);
		delay(1000);
	 IOCLR0 = (1<<12);
	 IOCLR0 = (1<<13);
		
	 IOCLR0 = (1<<10); 
	 IOCLR0 = (1<<11);
	 IOSET0 = (1<<12);
	 delay(1000);
	 IOCLR0 = (1<<13);
		
	 IOCLR0 = (1<<10); 
	 IOCLR0 = (1<<11);
	 IOCLR0 = (1<<12);
	 IOSET0 = (1<<13);
	 delay(1000);
	 IOCLR0 = (1<<13);
  }
  else 
  {
   IOSET0 = (1<<1);
   delay(1000);    
   IOCLR0 = (1<<2); 
	 IOCLR0 = (1<<3);
	 IOCLR0 = (1<<4);
		   
   IOCLR0 = (1<<1); 
	 IOSET0 = (1<<2);
		delay(1000);
	 IOCLR0 = (1<<3);
	 IOCLR0 = (1<<4);
		
	 IOCLR0 = (1<<1);
	 IOCLR0 = (1<<2);
	 IOSET0 = (1<<3);
	 delay(1000);
	 IOCLR0 = (1<<4);
		
	 IOCLR0 = (1<<1); 
	 IOCLR0 = (1<<2);
	 IOCLR0 = (1<<3);
	 IOSET0 = (1<<4);
	 delay(1000);
	 IOCLR0 = (1<<4);
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
