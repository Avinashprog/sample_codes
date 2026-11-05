#include<stdio.h>
#include<stdint.h>


uint32_t extract(uint32_t reg, uint32_t pos,uint32_t len)
{
	return (reg>>pos) &((1<<len)-1);
}

int main()
{
	uint32_t reg,pos,len;
	scanf("%u%u%u",&reg,&pos,&len);
	printf("%d\n",extract(reg,pos,len));
}
