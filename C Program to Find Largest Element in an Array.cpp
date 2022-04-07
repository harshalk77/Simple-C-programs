#include<stdio.h>
int main()
{
	int i,n,large;
	printf("Enter no of Elements in array: ");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter elements in array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
     
	}
	large=a[0];
	for(i=0;i<n;i++)
	{
		if(large<a[i])
		{
			large = a[i];
		}
	}
	printf("Largest number in Array is %d",large);
	
	return 0;
	
}
