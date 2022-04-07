#include<stdio.h>
int main()
{
	int n;
	printf("Enter Any Integer: ");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("\n%d is A Positive Integer.",n);
	}
	else
	{
		printf("\n%d is A Negative Integer.",n);
	}
}
