#include<stdio.h>
int main()
{
	int n;
	printf("Enter Any Positive Integer: ");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("\n%d is Even number.",n);
	}
	else
	{
		printf("\n%d is Odd number.",n);
	}
	
	return 0;
}
