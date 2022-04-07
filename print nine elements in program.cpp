#include<stdio.h>
int main()
{
	int i,j;
	int a[3][3];
	printf("Enter elements in array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf(" %d\t",&a[i][j]);
		}
	}
	
	printf("Elements in array\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

