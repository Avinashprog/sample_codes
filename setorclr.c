#include<stdio.h>
#include<stdint.h>

unsigned char modifi(uint8_t reg, uint32_t pos,uint32_t mode)
{
	if(mode==0)
		reg &=~(1<<pos);
	else if(mode==1)
		reg |=(1<<pos);
	return reg;
}

int main()
{
	unsigned char reg;
	uint32_t pos,mode;
	scanf("%hhu %d %d",&reg,&pos,&mode);
	printf("%d\n",modifi(reg,pos,mode));
}
