#include<stdio.h>
int main()
{
	int i, sum=0;
	
	for(i=1;i<=20;i=i+2)
	{ 
	sum=sum+i;
	}
	printf("\nsum of first 10 odd natural numbers is %d",sum);
	
	return 0;
}

