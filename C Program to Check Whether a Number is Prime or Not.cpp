#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter a number: ");
	scanf("%d",&n);
	
	if(n==0||n==1)
	{
		count=1;
	}
	i=2;
	while(i<=n/2)
	{
		if(n%i==0)
		{
			count=1;
			break;
		}
	i++;
	}
	if(count==0)
	{
		printf("Entered number is prime.");
	}
	else
	{
		printf("Enterd number is not prime.");
	}
	
	return 0;
}
