#include<stdio.h>
#include<stdint.h>

uint32_t specificbits(uint32_t reg,uint32_t pos,uint32_t len)
{
	int i=0;
	for(i;i<=31;i++)
	{
		if(i==pos)
		{
			while(len)
			{
				reg|=(1<<pos);
				pos++;
				len--;
			}
			break;
		}
	
	}
	return reg;
}

int main()
{
	uint32_t reg,pos,len,reg1;
	int i;
	scanf("%u %u %u",&reg,&pos,&len);
	for(i=31;i>=0;i--)
	{
		printf("%d ",(reg>>i)&1);
	}
	printf("\n");
	printf("%d\n",reg1=specificbits(reg,pos,len));
	for(i=31;i>=0;i--)
	{
		printf("%d ",(reg1>>i)&1);
	}
	printf("\n");

}
