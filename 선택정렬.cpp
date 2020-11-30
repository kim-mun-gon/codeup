#include <stdio.h>

int a[100001];
int n, i, j, temp, min;

int main(void)
{
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i = 1; i < n; i++)
	{
		min = i;
		for(j = i + 1; j <= n; j++)
		{
			if(a[j] < a[min])
			min = j;
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	for(i = 1; i <= n; i++)
	{
		printf("%d\n", a[i]);
	}
}
