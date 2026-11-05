#include <stdio.h>
#include <stdint.h>

uint32_t even(uint32_t reg)
{
	uint32_t pos = 0;res=0;
	int bit;

	for (bit = 0; bit <= 31; bit += 2) {
		if ((reg >> bit) & 1) {
			res |= (1 << pos);
			pos++;
		}
	}
	return res;
}


int main()
{
	uint32_t reg ;

	scanf("%u",&reg);
	printf("%d\n",even(reg));
}
