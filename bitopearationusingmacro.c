#include<stdio.h>
#include<stdint.h>

#define set(r,a,b) (r|=(1<<a)|(1<<b))
#define clear(r,a) (r&=~(1<<a))
#define toggle(r,a) (r^=(1<<a))

void binary(uint8_t );

int main()
{
	uint8_t reg,reg1;
	scanf("%hhu",&reg);
	binary(reg);
	set(reg,2,7);
	clear(reg,3);
	toggle(reg,5);

	printf("%d\n",reg);
	binary(reg);

}
void binary(uint8_t reg)
{
	int i=7;
	for(i;i>=0;i--)
	{
		printf("%d ",((reg>>i)&1));

	}
	printf("\n");
	
}	


