#include <stdio.h>

int main(void)
{
	char name[50][50];
	int score[100], rank[100];
	
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%s", name[i]);
		scanf("%d", &score[i]);
		rank[i] = 1;
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(score[i] < score[j])
			rank[i]++;
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		if(rank[i] == 3)
		{
			printf("%s", name[i]);
		}
	}
	return 0;
}
