#include<stdio.h>
int main()
{
	int i,n,sum=0;
	float average;
	printf("Enter no of Elements in array: ");
	scanf("%d",&n);
	int a[n];
	
	printf("\nEnter Elements in array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	average=sum/n;
	
	printf("\nThe Average of elements in array is %.3f",average);
	
	return 0;
}
