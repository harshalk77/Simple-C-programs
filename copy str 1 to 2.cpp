#include <stdio.h>
#include <string.h>
 
int main()
{
  	char Str1[100], Str2[100];
  	int i, j;
 
  	printf("\n Enter 1st string :  ");
  	gets(Str1);
  	
  	printf("\n Enter 2nd string :  ");
  	gets(Str2);

        
  	for (i = 0;Str1[i]!='\0';i++);
  	{
  
  	for (j = 0;Str2[j]!='\0';j++,i++)
  	{
  		Str1[i] = Str2[j];
  	}
  	Str1[i] = '\0';
     }

  	printf("\n After the Concatenate = %s", Str1);
  	
  	return 0;
}
