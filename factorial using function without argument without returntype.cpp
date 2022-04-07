#include<stdio.h>
void factorail();

int main()
{
	
	factorail();
	return 0;
}

void factorail()
{    int n,i=1,fact=1;
	printf("Enter Positive Integer:");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial is %d",fact);
	
}
