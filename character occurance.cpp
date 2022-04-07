#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char ch;
	char str[100];
	int count = 0;
	
	printf("Enter line: ");
	gets(str);
	
	printf("Enter character you want to search: ");
	scanf("%c",&ch);
	
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]==ch)
		{
			count++;
		}
	}
	
	
	printf("The character %c is occurs %d times in a given string",ch,count);
	
	return 0;
	
}
