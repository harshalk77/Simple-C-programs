#include<stdio.h>
int main()
{
	int i,array[5];
	
	printf("Enter Elements:\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Elements In array are \n");
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",array[i]);
	}
	return 0;
}
