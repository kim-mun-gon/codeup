#include <stdio.h>

long long int f()
{
	return -2147483649LL;
}

int main(void)
{
	printf("%lld", f());
}
