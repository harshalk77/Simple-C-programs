#include<stdio.h>
int main()
{
	int i,count=0;
     char str[100];
     printf("Enter String: ");
     gets(str);
     
     for(i=0;str[i]!=NULL;i++)
     {
     	count++;
	}
	
	printf("\nThe length of string is %d",count);
	
	return 0;  
}
