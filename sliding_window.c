#include <stdio.h>


void sliding_window (int *arr, int n, int k) {
	int i = 0;
	int j = 0;
	int a = 0;
	int sum = 0;
	int cnt = 0;
	int res[10];


	for (i = 0; i <= n - k ; i++) {
		sum = 0;
		cnt = 0;
		for(j = i ; j < n ; j++) {
			if (cnt<k)
			{
				sum += arr[j];
				cnt++;
			}
		}
		res[a++] = sum;
	}

	res[a] = '\0';

	for(i = 0 ; i < a ; i++) {
		printf("%d ", res[i]);
	}

	printf("\n");
}

int main()
{
	int arr[10];
	int n;
	int k;

	scanf("%d %d",&n, &k);

	for(int i = 0; i < n ; i++) {
		scanf("%d", &arr[i]);
	}

	sliding_window (arr,n,k);

}
