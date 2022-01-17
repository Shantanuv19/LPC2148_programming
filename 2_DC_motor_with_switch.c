#include<lpc214x.h>
int main()
{   
  IODIR0 = (0<<9); //switch
	IODIR0 = (1<<10)|(1<<12); //led
 while(1)
 {
  if(!(IOPIN0&(1<<9)))   
  {
   IOSET0 = (1<<10);    
   IOCLR0 = (1<<12);    
  }
  else 
  {
   IOSET0 = (1<<12);    
   IOCLR0 = (1<<10);    
  }
 }
}
