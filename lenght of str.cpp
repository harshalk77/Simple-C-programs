#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[100]={"Welcome to rit"};
	int count=0;
	
	for(i=0;str[i]!=NULL;i++)
	{
		count++;
	}
	printf("The length of string is %d",count);
	
	return 0;
}
