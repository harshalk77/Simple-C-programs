#include<stdio.h>
int main()
{
	int i,j;
	int a[3][3];
	printf("Enter elements in array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{   printf("Element in a[%d][%d]:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("even numbers in array \n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{   if(a[i][j]%2==0)
			printf("%d\n",a[i][j]);
		}
	}
	printf("odd numbers in array are:\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{   if(a[i][j]%2!=0)
			printf("%d\n",a[i][j]);
		}
	}
	return 0;
}

