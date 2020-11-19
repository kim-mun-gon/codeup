#include <stdio.h>

void exchange(int *a, int *b);

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
				exchange(&arr[j], &arr[j + 1]);
			}
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
}

void exchange(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
