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
	printf("The Players Who score more than 100 are\n");
	for(i=0;i<5;i++)
	{
		if(p[i].score>=100)
		{
	      	printf("%s\n",p[i].player_name);	
		}
		
	}
	
	return 0;
}
