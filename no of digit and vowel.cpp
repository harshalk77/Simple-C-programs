#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char line[100];
	int space=0,vowels=0,consonant=0,digit=0;
	gets(line);
	
	for(i=0;line[i]!=NULL;i++)
	{
		if(line[i]==' ')
		{
			space++;
		}
		else if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'||line[i]=='A'||line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U')
		{
			vowels++;
		}
		else if(line[i]>=48 && line[i]<=57)
		{
			digit++;
		}
		else
		{
			consonant++;
		}
	}
	printf("\n\nVowels: %d", vowels);
     printf("\nConsonants: %d", consonant);
     printf("\nDigits: %d", digit);
     printf("\nWhite spaces: %d", space);
     
     return 0;
}
