#include <stdio.h>
#include <string.h>

struct student{
	char name[20];
	int subject1, subject2, subject3;
	
};

int main(void)
{
	struct student s[100];
	struct student temp;
	int subject2_rank= 1, subject3_rank = 1;
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%s %d %d %d", s[i].name, &s[i].subject1, &s[i].subject2, &s[i].subject3);
	}
	
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - 1; j++)
		{
			if(s[j].subject1 < s[j + 1].subject1)
			{
				memcpy(&temp, &s[j], sizeof(struct student));
				memcpy(&s[j], &s[j+1], sizeof(struct student));
				memcpy(&s[j+1], &temp, sizeof(struct student));
			}
		}
	}
	
	for(int i = 1; i < n; i++)
	{
		if(s[i].subject2 > s[0].subject2)
			subject2_rank++;
		if(s[i].subject3 > s[0].subject3)
			subject3_rank++;
	}
	
	printf("%s %d %d", s[0].name, subject2_rank, subject3_rank);
}
