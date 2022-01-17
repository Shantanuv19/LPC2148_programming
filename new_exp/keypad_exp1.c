#include<lpc214x.h>
#include <lpc214x.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
void delay(int a);
void delay_ms(uint16_t j) /* Function for delay in milliseconds  */
{
    uint16_t x,i;
	for(i=0;i<j;i++)
	{
    for(x=0; x<6000; x++);    /* loop to generate 1 millisecond delay with Cclk = 60MHz */
	}
}
void LCD_CMD(char command)
{
	IO0PIN = ( (IO0PIN & 0xFFFF00FF) | (command<<8) );
	IO0SET = 0x00000040; /* EN = 1 */
	IO0CLR = 0x00000030; /* RS = 0, RW = 0 */
	delay_ms(2);
	IO0CLR = 0x00000040; /* EN = 0, RS and RW unchanged(i.e. RS = RW = 0) */
	delay_ms(5);
}
void LCD_INIT(void)
{
	IO1DIR = (1<<19)|(1<<20)|(1<<21)|(1<<22)|(1<<23)|(1<<24)|(1<<25)|(1<<26)|(1<<16)|(1<<17)|(1<<18); /* P0.8 to P0.15 LCD Data. P0.4,5,6 as RS RW and EN */
	delay_ms(20);
	LCD_CMD(0x38);  /* Initialize lcd */
	LCD_CMD(0x0C);   /* Display on cursor off */
	LCD_CMD(0x06);  /* Auto increment cursor */
	LCD_CMD(0x01);   /* Display clear */
	LCD_CMD(0x80);  /* First line first position */
}

void LCD_STRING (char* msg)
{
	uint8_t i=0;
	while(msg[i]!=0)
	{
		IO0PIN = ( (IO0PIN & 0xFFFF00FF) | (msg[i]<<8) );
		IO0SET = 0x00000050; /* RS = 1, , EN = 1 */
		IO0CLR = 0x00000020; /* RW = 0 */
		delay_ms(2);
		IO0CLR = 0x00000040; /* EN = 0, RS and RW unchanged(i.e. RS = 1, RW = 0) */
		delay_ms(5);
		i++;
	}
}

void LCD_CHAR (char msg)
{
		IO0PIN = ( (IO0PIN & 0xFFFF00FF) | (msg<<8) );
		IO0SET = 0x00000050; /* RS = 1, , EN = 1 */
		IO0CLR = 0x00000020; /* RW = 0 */
		delay_ms(2);
		IO0CLR = 0x00000040; /* EN = 0, RS and RW unchanged(i.e. RS = 1, RW = 0) */
		delay_ms(5);
}

int main(void)
{   
  IODIR0 = (0<<2)|(0<<3)|(0<<4)|(0<<5); //switch
	IODIR0 = (1<<6)|(1<<1)|(1<<7)|(1<<8); //led
 while(1)
 {
	 IOSET0 = (1<<6);
  if(!(IOPIN0&(1<<2)))   
  {
	 IOCLR0 = (1<<1);
	}    
  else 
  {  
   IOSET0 = (1<<1);
	 delay(1);
	 IOCLR0 = (1<<1);	
  }
	if(!(IOPIN0&(1<<3)))   
  {
	 IOCLR0 = (1<<1);
	}    
  else 
  {  
   IOSET0 = (1<<1);
	 delay(1);
	 IOCLR0 = (1<<1);	
  }
	if(!(IOPIN0&(1<<4)))   
  {
	 IOCLR0 = (1<<1);
	}    
  else 
  {  
   IOSET0 = (1<<1);
	 delay(1);
	 IOCLR0 = (1<<1);	
  }
	if(!(IOPIN0&(1<<5)))   
  {
	 IOCLR0 = (1<<1);
	}    
  else 
  {  
   IOSET0 = (1<<1);
	 delay(1);
	 IOCLR0 = (1<<1);	
  }
	
	IOSET0 = (1<<7);
  if(!(IOPIN0&(1<<2)))   
  {
	 IOCLR0 = (1<<1);
	}    
  else 
  {  
   IOSET0 = (1<<1);
	 delay(1);
	 IOCLR0 = (1<<1);	
  }
	if(!(IOPIN0&(1<<3)))   
  {
	 IOCLR0 = (1<<1);
	}    
  else 
  {  
   IOSET0 = (1<<1);
	 delay(1);
	 IOCLR0 = (1<<1);	
  }
	if(!(IOPIN0&(1<<4)))   
  {
	 IOCLR0 = (1<<1);
	}    
  else 
  {  
   IOSET0 = (1<<1);
	 delay(1);
	 IOCLR0 = (1<<1);	
  }
	if(!(IOPIN0&(1<<5)))   
  {
	 IOCLR0 = (1<<1);
	}    
  else 
  {  
   IOSET0 = (1<<1);
	 delay(1);
	 IOCLR0 = (1<<1);	
  }
	
	IOSET0 = (1<<8);
  if(!(IOPIN0&(1<<2)))   
  {
	 IOCLR0 = (1<<1);
	}    
  else 
  {  
   IOSET0 = (1<<1);
	 delay(1);
	 IOCLR0 = (1<<1);	
  }
	if(!(IOPIN0&(1<<3)))   
  {
	 IOCLR0 = (1<<1);
	}    
  else 
  {  
   IOSET0 = (1<<1);
	 delay(1);
	 IOCLR0 = (1<<1);	
  }
	if(!(IOPIN0&(1<<4)))   
  {
	 IOCLR0 = (1<<1);
	}    
  else 
  {  
   IOSET0 = (1<<1);
	 delay(1);
	 IOCLR0 = (1<<1);	
  }
	if(!(IOPIN0&(1<<5)))   
  {
	 IOCLR0 = (1<<1);
	}    
  else 
  {  
   IOSET0 = (1<<1);
	 delay(1);
	 IOCLR0 = (1<<1);	
  }
 }

//int main(void)

	uint8_t j;
	j = 0;
	char val_j[3];
	LCD_INIT();
	LCD_STRING("Good Day! hello");
	LCD_CMD(0xC0);
	LCD_STRING("Val of j is:");
	for(j=0;j<10;j++)
	{		
		sprintf(val_j,"%d ",j);
		LCD_STRING(val_j);	
		delay_ms(100);
		LCD_CMD(0xCC);
	}
	return 0;
}
void delay(int a)
{
	unsigned int i,j;
	for(i=0; i<a; i++)
	for(j=0; j<=1275; j++);
}
