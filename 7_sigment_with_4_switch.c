#include<lpc214x.h>
void delay(int a);
int main()
{
	IODIR0 = (0<<14)|(0<<13)|(0<<12); //switch
	IODIR0 = (1<<0)|(1<<1)|(1<<2)|(1<<3)|(1<<4)|(1<<5)|(1<<6);
	
	while(1){													//for(;;)
		 if(!(IOPIN0&(1<<14)))
		 {
		 }
		 else
			 level:{
				while(1){
				 if(!(IOPIN0&(1<<13)))
					 L9:
					{
						IOSET0 = (1<<0);                 //0
						IOSET0 = (1<<1);
						IOSET0 = (1<<2);
						IOSET0 = (1<<3);
						IOSET0 = (1<<4);
						IOSET0 = (1<<5);
						IOCLR0 = (1<<6);
						delay(1000);
					}
					else
					{
						goto level;
					}
				if(!(IOPIN0&(1<<12)))
					{ 
					}
					else
					{
						goto level0;
					}
				 
				 if(!(IOPIN0&(1<<13)))          //1
					 L0:
				 {
						IOCLR0 = (1<<0);
						IOSET0 = (1<<1);
						IOSET0 = (1<<2);
						IOCLR0 = (1<<3);
						IOCLR0 = (1<<4);
						IOCLR0 = (1<<5);
						IOCLR0 = (1<<5);
						delay(1000);
					}
					else
					{
						goto level;
					}
				if(!(IOPIN0&(1<<12)))
					{ 
					}
					else
					{
						goto level1;
					}
				if(!(IOPIN0&(1<<13)))        //2
					L1:	
				{
						IOSET0 = (1<<0);
						IOSET0 = (1<<1);
						IOCLR0 = (1<<2);
						IOSET0 = (1<<3);
						IOSET0 = (1<<4);
						IOCLR0 = (1<<5);
						IOSET0 = (1<<6);
						delay(1000);
					}
					else
					{
						goto level;
					}
				if(!(IOPIN0&(1<<12)))
					{ 
					}
					else
					{
						goto level2;
					}
				if(!(IOPIN0&(1<<13)))                //3
					L2:	
				{
						IOSET0 = (1<<0);
						IOSET0 = (1<<1);
						IOSET0 = (1<<2);
						IOSET0 = (1<<3);
						IOCLR0 = (1<<4);
						IOCLR0 = (1<<5);
						IOSET0 = (1<<6);
						delay(1000);
					}
					else
					{
						goto level;
					}
				if(!(IOPIN0&(1<<12)))
					{ 
					}
					else
					{
						goto level3;
					}
				if(!(IOPIN0&(1<<13)))             //4
					L3:	
				{
						IOCLR0 = (1<<0);
						IOSET0 = (1<<1);
						IOSET0 = (1<<2);
						IOCLR0 = (1<<3);
						IOCLR0 = (1<<4);
						IOSET0 = (1<<5);
						IOSET0 = (1<<6);
						delay(1000);
					}
					else
					{
						goto level;
					}
				if(!(IOPIN0&(1<<12)))
					{ 
					}
					else
					{
						goto level4;
					}
				if(!(IOPIN0&(1<<13)))                //5
					L4:	
				{
						IOSET0 = (1<<0);
						IOCLR0 = (1<<1);
						IOSET0 = (1<<2);
						IOSET0 = (1<<3);
						IOCLR0 = (1<<4);
						IOSET0 = (1<<5);
						IOSET0 = (1<<6);
						delay(1000);
					}
					else
					{
						goto level;
					}
					if(!(IOPIN0&(1<<12)))
					{ 
					}
					else
					{
						goto level5;
					}
				if(!(IOPIN0&(1<<13)))              //6
					L5:	
				{
						IOSET0 = (1<<0);
						IOCLR0 = (1<<1);
						IOSET0 = (1<<2);
						IOSET0 = (1<<3);
						IOSET0 = (1<<4);
						IOSET0 = (1<<5);
						IOSET0 = (1<<6);
						delay(1000);
					}
					else
					{
						goto level;
					}
				if(!(IOPIN0&(1<<12)))
					{ 
					}
					else
					{
						goto level6;
					}
				if(!(IOPIN0&(1<<13)))                //7
					L6:
				{
					IOSET0 = (1<<0);
					IOSET0 = (1<<1);
					IOSET0 = (1<<2);
					IOCLR0 = (1<<3);
					IOCLR0 = (1<<4);
					IOCLR0 = (1<<5);
					IOCLR0 = (1<<6);
					delay(1000);
				}
				else
				{
					goto level;
				}
				if(!(IOPIN0&(1<<12)))
					{ 
					}
					else
					{
						goto level7;
					}
				if(!(IOPIN0&(1<<13)))                        //8
					L7:
				{
					IOSET0 = (1<<0);
					IOSET0 = (1<<1);
					IOSET0 = (1<<2);
					IOSET0 = (1<<3);
					IOSET0 = (1<<4);
					IOSET0 = (1<<5);
					IOSET0 = (1<<6);
					delay(1000);
				}
				else
				{
					goto level;
				}
				if(!(IOPIN0&(1<<12)))
					{ 
					}
					else
					{
						goto level8;
					}
				if(!(IOPIN0&(1<<13)))               //9
					L8:
				{
					IOSET0 = (1<<0);
					IOSET0 = (1<<1);
					IOSET0 = (1<<2);
					IOSET0 = (1<<3);
					IOCLR0 = (1<<4);
					IOSET0 = (1<<5);
					IOSET0 = (1<<6);
					delay(1000);
				}
				else
				{
					goto level;
				}
				if(!(IOPIN0&(1<<12)))
					{ 
					}
					else
					{
						goto level9;
					}
			}
		} 
	}
	{
	level0:{
				 while(1)
					if(!(IOPIN0&(1<<15))) 
				 {
					 IOSET0 = (1<<0);
					IOSET0 = (1<<1);
					IOSET0 = (1<<2);
					IOSET0 = (1<<3);
					IOSET0 = (1<<4);
					IOSET0 = (1<<5);
					IOCLR0 = (1<<6);
					delay(1000);}
				 else
				 {
					 goto L0;
				 }
}

level1:{
				 while(1)
					if(!(IOPIN0&(1<<15))) 
				 {
					 IOCLR0 = (1<<0);
					IOSET0 = (1<<1);
					IOSET0 = (1<<2);
					IOCLR0 = (1<<3);
					IOCLR0 = (1<<4);
					IOCLR0 = (1<<5);
					IOCLR0 = (1<<5);
					delay(1000);}
				 else
				 {
					 goto L1;
				 }
}
level2:{
				 while(1)
					if(!(IOPIN0&(1<<15))) 
				 {
					 IOSET0 = (1<<0);
						IOSET0 = (1<<1);
						IOCLR0 = (1<<2);
						IOSET0 = (1<<3);
						IOSET0 = (1<<4);
						IOCLR0 = (1<<5);
						IOSET0 = (1<<6);
						delay(1000);}
				 else
				 {
					 goto L2;
				 }
}

level3:{
				 while(1)
					if(!(IOPIN0&(1<<15))) 
				 {
					 IOSET0 = (1<<0);
						IOSET0 = (1<<1);
						IOSET0 = (1<<2);
						IOSET0 = (1<<3);
						IOCLR0 = (1<<4);
						IOCLR0 = (1<<5);
						IOSET0 = (1<<6);
						delay(1000);}
				 else
				 {
					 goto L3;
				 }
}
level4:{
				 while(1)
					if(!(IOPIN0&(1<<15))) 
				 {
					 IOCLR0 = (1<<0);
					IOSET0 = (1<<1);
					IOSET0 = (1<<2);
					IOCLR0 = (1<<3);
					IOCLR0 = (1<<4);
					IOSET0 = (1<<5);
					IOSET0 = (1<<6);
					delay(1000);}
				 else
				 {
					 goto L4;
				 }
}

level5:{
				 while(1)
					if(!(IOPIN0&(1<<15))) 
				 {
					 IOSET0 = (1<<0);
					IOCLR0 = (1<<1);
					IOSET0 = (1<<2);
					IOSET0 = (1<<3);
					IOCLR0 = (1<<4);
					IOSET0 = (1<<5);
					IOSET0 = (1<<5);
					delay(1000);}
				 else
				 {
					 goto L5;
				 }
}
level6:{
				 while(1)
					if(!(IOPIN0&(1<<15))) 
				 {
					 IOSET0 = (1<<0);
					IOCLR0 = (1<<1);
					IOSET0 = (1<<2);
					IOSET0 = (1<<3);
					IOSET0 = (1<<4);
					IOSET0 = (1<<5);
					IOSET0 = (1<<6);
					delay(1000);}
				 else
				 {
					 goto L6;
				 }
}

level7:{
				 while(1)
					if(!(IOPIN0&(1<<15))) 
				 {
					 IOSET0 = (1<<0);
					IOSET0 = (1<<1);
					IOSET0 = (1<<2);
					IOCLR0 = (1<<3);
					IOCLR0 = (1<<4);
					IOCLR0 = (1<<5);
					IOCLR0 = (1<<5);
					delay(1000);}
				 else
				 {
					 goto L7;
				 }
}
level8:{
				 while(1)
					if(!(IOPIN0&(1<<15))) 
				 {
					 IOSET0 = (1<<0);
					IOSET0 = (1<<1);
					IOSET0 = (1<<2);
					IOSET0 = (1<<3);
					IOSET0 = (1<<4);
					IOSET0 = (1<<5);
					IOSET0 = (1<<6);
					delay(1000);}
				 else
				 {
					 goto L8;
				 }
}

level9:{
				 while(1)
					if(!(IOPIN0&(1<<15))) 
				 {
					 {
					 IOSET0 = (1<<0);
					IOSET0 = (1<<1);
					IOSET0 = (1<<2);
					IOSET0 = (1<<3);
					IOCLR0 = (1<<4);
					IOSET0 = (1<<5);
					IOSET0 = (1<<5);
					delay(1000);}
				}
				 else
				 {
					 goto L9;
				 }
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
