#include <stdio.h>

int main(void){
	int arr[10001];
	
	int n;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - 1; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
}
