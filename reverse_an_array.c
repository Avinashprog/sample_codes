#include <stdio.h>
#include <stdint.h>

void reverse_array (int  *arr , int n) {
	int i = 0 ;
	int j = n-1;
	int temp = 0;

	for(i ; i <= j ; i++, j--) {
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
int main()
{
	int arr [10] = {0};
	int i = 0;
	int n=0;
	
	scanf(" %d " , &n);

	for (i ; i < n ; i++) {
		scanf("%d", &arr[i]);
	}

	reverse_array (arr , n);

	for (i = 0 ; i < n ; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
}

