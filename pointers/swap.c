#include <stdio.h>


void swp(int *a, int *b)
{
	*a = *a ^ *b ;
	*b = *a ^ *b ;
	*a = *a ^ *b ;
}

int main()
{
	int a;
	int b;

	scanf("%d %d",&a ,&b);

	swp(&a, &b);

	printf("%d %d\n", a, b);
}
