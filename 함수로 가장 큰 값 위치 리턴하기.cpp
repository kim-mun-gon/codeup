#include <stdio.h>

int n, d[10];

int f()
{
	int max = 0;
	int index = 0;
	for(int i = 0; i < n; i++)
	{
		if(max < d[i])
		{
			max = d[i];
			index = i;
		}
	}
	return index + 1;
}

int main(void)
{
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &d[i]);
	}
	
	printf("%d", f());
	return 0;
}
