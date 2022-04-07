#include<stdio.h>
#include<string.h>
int main()
{
	int i,count;
     char str[100];
     printf("Enter String: ");
     gets(str);
     count = strlen(str);
	
	printf("The length of string is %d",count);
	
	return 0;  
}
