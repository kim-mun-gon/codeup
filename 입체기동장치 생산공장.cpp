#include <stdio.h>

struct factory{
	int a;
	int b;
};

int main(void)
{
	struct factory f[50];
	
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &f[i].a, &f[i].b);
	}
	
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - 1; j++)
		{
			if(f[j].a > f[j+1].a)
			{
				int tempA = f[j].a;
				int tempB = f[j].b;
				f[j].a = f[j+1].a;
				f[j].b = f[j+1].b;
				f[j+1].a = tempA;
				f[j+1].b = tempB;
			}
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		printf("%d %d\n", f[i].a, f[i].b);
	}
	return 0;
}
