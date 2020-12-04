#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[100];
	scanf("%s", s);
	
	if(strcmp(s, "love") == 0)
	{
		printf("I love you.");
	}
	return 0;
}
