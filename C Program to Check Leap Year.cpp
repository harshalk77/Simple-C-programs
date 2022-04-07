#include<stdio.h>
int main()
{
	int year;
	printf("Enter A Year: ");
	scanf("%d",&year);
	
	if(year%400==0)
	{
		printf("%d is a leap Year",year);
	}
	else if(year%100==0)
	{
		printf("%d is a not leap Year",year);
	}
	else if(year%4==0)
	{
		printf("%d is a leap Year",year);
	}
	else
	{
		printf("%d is a not leap Year",year);
	}
	
	return 0;
}
