#include <stdio.h>

int main(void)
{
	int arr[100][100] = {};
	
	int n, m;
	int x = 1;
	
	scanf("%d %d", &n, &m);
	
	for(int i = m - 1; i >= 0; i--)
	{
		for(int j = 0; j < n; j++)
		{
			arr[j][i] = x;
			x++;
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
