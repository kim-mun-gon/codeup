#include <stdio.h>

int main(void)
{
	double a , b;
	scanf("%lf %lf", &a, &b);
	
	if(a > b)
	{
		double temp = a;
		a = b;
		b = temp;
	}
	
	for(double i = a; i <= b; i+=0.01)
	{
		printf("%.2lf ", i);
	}
}
