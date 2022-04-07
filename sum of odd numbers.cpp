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
	{    if(array[i]%2!=0)
	     {
		sum=sum+array[i];
		}
	}
	printf("The sum of odd numbers= %d",sum);
	
	return 0;
}
