#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter Any integer: ");
	scanf("%d",&n);
	
	do
	{
		n=n/10;
		count++;
	}
	while(n!=0);
	
	printf("\nThe Number of digit in integer is %d",count);
	return 0;
}
