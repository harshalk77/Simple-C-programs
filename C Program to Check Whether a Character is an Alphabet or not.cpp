#include<stdio.h>
int main()
{
	char x;
	printf("Enter any character: ");
	scanf("%c",&x);
	
	if(x>=65 && x<=90)
	{
		printf("\n%c is Alphabet.",x);
	}
	else if (x>=97 && x<=122)
	{
		printf("\n%c is Alphabet.",x);
	}
	else
	{
		printf("\n%c is Not Alphabet.",x);
	}
	
}
