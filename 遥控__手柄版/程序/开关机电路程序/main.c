#include<stc15.h>
#include "intrins.h"			  //�������ػ����򣬴�����⣬���ʱ���迪��
#define u16 unsigned int
#define u8 unsigned char
sbit out=P3^1;	    //�������mos��
sbit key=P3^2;		 //�ᴥ����
sbit vin=P3^0;        //���
u8 num,i;
void delay10ms()		//@11.0592MHz
{
	unsigned char i, j;

	i = 108;
	j = 145;
	do
	{
		while (--j);
	} while (--i);
}

void main()
{
  P3M1=0X01;    //0000 0001   P3.2׼˫��� P3.1ǿ���� P3.0���� 
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
		PCON=0x02;  //�������ģʽ
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
















