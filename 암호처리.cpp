#include <stdio.h>
#include <string.h>

int main(void)
{
	char PD[20];
	
	gets(PD);
	
	for(int i = 0; PD[i] != '\0'; i++)
	{
		printf("%c", PD[i] + 2);
	}
	printf("\n");
	
	for(int i = 0; PD[i] != '\0'; i++)
	{
		printf("%c", (PD[i] * 7) % 80 + 48);
	}
	return 0;
}
