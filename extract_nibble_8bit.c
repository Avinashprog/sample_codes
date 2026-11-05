#include<stdio.h>
#include<stdint.h>


uint8_t extract(uint8_t reg,uint8_t pos)
{
	if(pos==0)
		reg=(reg&0x0F);
	else if(pos==1)
		reg=(reg>>4)&0x0F;
	return reg;
}

int main()
{
	uint8_t reg, pos;
	scanf("%hhu %hhu",&reg,&pos);
	printf("%d\n",extract(reg,pos));
}
