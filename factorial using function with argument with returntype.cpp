#include<stdio.h>
int factorail(int n,int i,int fact);

int main()
{
	int n,i=1,r,fact=1;
	printf("Enter Positive Integer:");
	scanf("%d",&n);
	r=factorail(n,i,fact);
	printf("Factorial is %d",r);
	return 0;
}

int factorail(int n,int i,int fact)
{
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	return fact;
	
	
}
