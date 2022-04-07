#include<stdio.h>
int main()
{
	int n,k;
	long int fib[20];
	printf("Enter Range: ");
	scanf("%d",&n);
	fib[0]=-1;
	fib[1]=1;
	printf("\nFibonacci Series:\n");
	for(k=2;k<n+1;k++)
	{	
		fib[k]=fib[k-1]+fib[k-2];
		printf("\t%d",fib[k]);
	}
	return 0;
}
