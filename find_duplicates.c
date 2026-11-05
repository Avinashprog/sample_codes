#include <stdio.h>

int find_dup (int *arr, int n) {
	int i = 0;
	int j = 0;
	int cnt = 0;
	int temp = 0;

	for(i = 0 ; i < n ; i++) {
		for(j = i + 1 ; j < n ; j++) {
			if (arr[i] == arr[j])
			{
				temp=arr[i];
				cnt = 1;
			}
			
		}
	}
	return temp;
}

int main()
{
	int arr[10];
	int n;

	scanf("%d", &n);

	for (int i = 0 ;i < n ; i++) {
		scanf("%d", &arr[i]);
	}

	int res = find_dup(arr, n);

	printf("%d\n", res);
}
