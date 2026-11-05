#include<stdio.h>
#include<stdint.h>


void binary(uint16_t reg)
{
	int bit=15;
	for(bit;bit>=0;bit--)
	{
		printf("%d ",((reg>>bit)&1));
	}
	printf("\n");
}

uint16_t bitspread(uint8_t reg)
{
	int pos,res;
	for(int bit=7;bit>=0;bit--)
	{
		pos=(reg>>bit)&1;
		res|=(pos<<(2*bit));
	}
	return res;
}
int main()
{
	uint8_t reg;
	scanf("%hhu",&reg);
	binary(reg);
	uint16_t result = bitspread(reg);
	printf("%d\n",result);
	binary(result);
}
