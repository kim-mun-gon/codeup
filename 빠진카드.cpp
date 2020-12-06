#include <stdio.h>

int main(void)
{
	int arr[100] = {0};
	int n, k;
	scanf("%d", &n);
	
	for(int i = 1; i <= n - 1; i++)
	{
		scanf("%d", &k);
		arr[k]++;
	}
	
	for(int i = 1; i <= n; i++)
	{
		if(arr[i] == 0)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
	
}
