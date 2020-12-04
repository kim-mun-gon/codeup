#include <stdio.h>

int main(void)
{
	int arr[101][101];
	int n;
	scanf("%d", &n);
	int x = 1;
	
	for(int j = 1; j <= n; j++)
	{
		if(j % 2 == 0)
		{
			for(int i = n; i > 0; i--)
			{
				arr[i][j] = x;
				x++;
			}
		}
		else
		{
			for(int i = 1; i <= n; i++)
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
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}
