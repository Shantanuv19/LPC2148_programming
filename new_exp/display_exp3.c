#include<lpc214x.h>
#define RS 1<<20
#define E 1<<21
void delay()
{
	unsigned int i,j;
	for(i=0;i<=1000;i++)
	for(j=0;j<=2000;j++);
}
void LCD_cmd(unsigned char cmd)
{
	IOCLR0=0xFF<<12;//clear data line
	IOSET0=cmd<<12;//send command
	IOCLR1=RS;
	delay();
	IOSET1=E;
	delay();
	IOCLR1=E;
	delay();
}
void LCD_data(unsigned char data)
{
	
	IOCLR0=0xFF<<12;//clear data line
	IOSET0=data<<12;//send command
	IOSET1=RS;
	delay();
	IOSET1=E;
	delay();
	IOCLR1=E;
	delay();
}
void LCD_init()
{
	PINSEL0=0;
	PINSEL1=0;
	PINSEL2=0;
	
	IODIR0=0xFF<<12;
	IODIR1=3<<20;
	
	LCD_cmd(0x38);
	LCD_cmd(0x01);
	LCD_cmd(0x0F);
	LCD_cmd(0x06);
}
int main()
{
	LCD_init();
	LCD_cmd(0x80);//1st line lcd 0th positive
	LCD_data('W');
	LCD_data('E');
	LCD_data('L');
	LCD_data('C');
	LCD_data('O');
	LCD_data('M');
	LCD_data('E');
	LCD_cmd(0xC0);//2nd line lcd 0th positive*/
	LCD_data('S');
	LCD_data('H');
	LCD_data('A');
	LCD_data('N');
	LCD_data('T');
	LCD_data('A');
	LCD_data('N');
	LCD_data('U');
}
