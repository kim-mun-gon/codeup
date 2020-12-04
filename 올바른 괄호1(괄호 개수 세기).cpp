#include <stdio.h>

int main(void)
{
	char s[100001];
	int cnt1 = 0, cnt2 = 0;
	
	scanf("%s", s);
	
	for(int i = 0; s[i] != '\0'; i++)
	{
		if(s[i] == '(')
		{
			cnt1++;
		}
		else if(s[i] == ')')
		{
			cnt2++;
		}
	}
	printf("%d %d", cnt1, cnt2);
}
