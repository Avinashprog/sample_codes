#include<stdio.h>
#include<stdint.h>

uint16_t highest(uint16_t reg)
{
	int i;
	for(i=15;i>=0;i--)
	{
		if((reg>>i)&1)
		{
			i--;
			while(i>=0)
			{
				reg&=~(1<<i);
				i--;
			}
		}
	}
	return reg;
}


int main()
{
	uint16_t reg,reg1;
	int i=15;
	scanf("%hu",&reg);
	for(i;i>=0;i--)
	{
		printf("%d ",((reg>>i)&1));
	}
	printf("\n");
	printf("%hu\n",reg1=highest(reg));
	for(i=15;i>=0;i--)
	{
		printf("%d ",((reg1>>i)&1));
	}
	printf("\n");
}

