#include<stdio.h>
int factorail();

int main()
{
	int r;
	r=factorail();
	printf("Factorial is %d",r);
	return 0;
}

int factorail()
{    int n,i=1,fact=1;
	printf("Enter Positive Integer:");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	
	return fact;	
}
