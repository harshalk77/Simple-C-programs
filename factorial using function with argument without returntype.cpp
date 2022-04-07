#include<stdio.h>
void factorail(int n,int i,int fact);

int main()
{    int n,i=1,fact=1;
	printf("Enter Positive Integer:");
	scanf("%d",&n);
	factorail(n,i,fact);
	return 0;
}

void factorail(int n,int i,int fact)
{   
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial is %d",fact);
	
}
