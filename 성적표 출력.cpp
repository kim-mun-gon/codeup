#include <stdio.h>
#include <string.h>

struct student{
	char name[10];
	int score;
};

int main(void)
{
	struct student s[100];
	struct student temp;
	int n, m;
	
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%s %d", &s[i].name, &s[i].score);
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n - 1; j++)
		{
			if(s[j].score < s[j+1].score)
			{
				memcpy(&temp, &s[j], sizeof(struct student));
				memcpy(&s[j], &s[j+1], sizeof(struct student));
				memcpy(&s[j+1], &temp, sizeof(struct student));
			}
		}
	}
	
	for(int i = 0; i < m; i++)
	{
		printf("%s\n", s[i].name);
	}
}
