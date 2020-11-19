#include<stdio.h>

int main(void)
{
	double a, r, n;
	scanf("%lf %lf %lf", &a, &r, &n);
	
	for(int i = 0; i < n - 1; i++)
	{
		a = a * r;
	}
	printf("%1.lf", a);
	return 0;
}
