#include <stdio.h>

int main(void)
{
	int arr[101][101];
	int n;
	int x = 1;
	scanf("%d", &n);

	for(int i = 1; i <= n; i++)
	{
		if(i % 2 == 0)
		{
			for(int j = n; j > 0; j--)
			{
				arr[i][j] = x;
				x++;
			}
		}
		else
		{
			for(int j = 1; j <= n; j++)
			{
				arr[i][j] = x;
				x++;
			}
		}
	}
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
