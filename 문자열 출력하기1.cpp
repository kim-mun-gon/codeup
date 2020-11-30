#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	
	gets(str);
	
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ')
			continue;
		printf("%c", str[i]);
	}
	return 0;
}
