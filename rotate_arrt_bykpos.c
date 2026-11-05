#include <stdio.h>
#include <stdint.h>


void rotatebykpos (int *arr, int n, int k)
{
	int i=0;
	int temp=0;

	while(k)
	{
		temp = arr[0];
		for(i = 0 ; i < n-1 ; i++) {
			arr[i] = arr[i+1];
		}
		arr[n-1] = temp;
		k--;
	}
}

int main()
{
	int n;
	int k;
	
	scanf(" %d %d ", &n , &k);
	
	int arr[10];
	
	for (int i = 0 ; i < n ; i++) {
		scanf("%d", &arr[i]);
	}
	
	rotatebykpos (arr, n , k);

	for(int i = 0 ; i < n ; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
}
