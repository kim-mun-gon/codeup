#include <stdio.h>

int main(void)
{
	int arr[1000];
	int n;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
				printf("%d ", arr[j]);
		}
		int temp = arr[0];
		for(int j = 0; j < n - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = temp;
		printf("\n");
	}
}
