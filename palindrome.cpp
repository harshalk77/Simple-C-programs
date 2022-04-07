#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	int count =0;
	char str[100];
	int length;
	
	printf("Enter String: ");
	gets(str);
	
	length=strlen(str);
	
	for(i=0;i<length;i++)
	{
		if(str[i]!=str[length-i-1])
		{
			count=1;
			break;
		}
	}
	
	if(count==0)
	{
		printf("The string is palindrome");
	}
	else
	{
		printf("The string is not palindrome");
	}
	
	return 0;
	
}
