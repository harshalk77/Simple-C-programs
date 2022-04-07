#include<stdio.h>
int main()
{
	char x;
	printf("Enter Any Alphabet: ");
	scanf("%c",&x);
	
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
	{
		printf("%c is Vowel",x);
	}
	else
	{
		printf("%c is Consonant",x);
	}
	
	return 0;
}
