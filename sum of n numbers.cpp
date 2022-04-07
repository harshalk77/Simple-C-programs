#include<stdio.h>
int main()
{
	int i,n,array[n],sum=0;
	
	printf("Enter number of elements in array: ");
	scanf("%d",&n);
	printf("Enter Any %d numbers:\n",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+array[i];
	}
	printf("The sum of %d numbers= %d",n,sum);
	
	return 0;
}
