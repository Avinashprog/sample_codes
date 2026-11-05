#include<stdio.h>
#include<stdint.h>

uint32_t replace(uint32_t reg,uint32_t val,uint32_t pos,uint32_t len)
{
	uint32_t mask =(((1<<len)-1)<<pos);
	reg&=~mask;
	return reg|=(val&((1<<len)-1))<<pos;
}


int main()
{
	uint32_t reg, val,pos,len;
	scanf("%u%u%u%u",&reg,&val,&pos,&len);
	printf("%d\n",replace(reg,val,pos,len));
}
