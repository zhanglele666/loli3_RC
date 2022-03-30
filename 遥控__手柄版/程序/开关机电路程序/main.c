#include<stc15.h>
#include "intrins.h"			  //长按开关机程序，带充电检测，充电时不予开机
#define u16 unsigned int
#define u8 unsigned char
sbit out=P3^1;	    //输出控制mos管
sbit key=P3^2;		 //轻触按键
sbit vin=P3^0;        //检测
u8 num,i;
void delay10ms()		//@11.0592MHz
{
	u8 i, j;
    i = 108;
	j = 145;
	do
	{
		while (--j);
	} while (--i);
}

void main()
{
  P3M1=0X01;    //0000 0001   P3.2准双向口 P3.1强推挽 P3.0高阻 
  P3M0=0X02;    //0000 0010
  out = 0;
  vin = 1;
  num = 0;
  EX0 = 1;
  IT0 = 1;
  EA  = 1;
  
while(1)
{ 
	if(key==0){
               delay10ms()
	 if(key==0){
	             while(!key);
		           out=1;
   if(key==0&&vin==1)
   {
   num++;
   delay10ms();
   }
   
   else{
		num=0;
		PCON=0x02;  //进入掉电模式
		_nop_();
	    _nop_();
	    _nop_();
	    _nop_(); 
			      }
   if(num==80)
   {
   out=!out;
   num=0;
   while(!key);
   }
			              
				}
			    }
  	
void INT0_int() interrupt 0
{
	if(out==1)
	{
		
	}
	else
	{
	
	}
}
















