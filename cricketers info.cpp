#include<stdio.h>
struct cricket
{
	int age;            ////player_name, age, score_in_ODI
	int score;
	char player_name[100];
}p[5];

int main()

{
     int i;
	for(i=0;i<5;i++)
	{
		printf("\nEnter Information Of player %d\n",i+1);
		printf("Enter Player Name: ");
		scanf("%s",&p[i].player_name);
		printf("Enter Age of Player: ");
		scanf("%d",&p[i].age);
		printf("Enter Player's score in ODI: ");
		scanf("%d",&p[i].score);
	}
	for(i=0;i<5;i++)
	{
		printf("\n\n     %d Player Information\n",i+1);
		printf("Player Name is %s\n",p[i].player_name);
		printf("%s's age is %d\n",p[i].player_name,p[i].age);
		printf("%s's score in ODI is %d\n",p[i].player_name,p[i].score);
	}
	
	return 0;
}
