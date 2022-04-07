#include<stdio.h>
int main()
{
	int i,j,small;
	int a[3][3];
	printf("Enter elements in array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{   printf("Element in a[%d][%d] : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	small=a[0][0];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if ( a[i][j] < small )
            small = a[i][j];
		}
	}
	
	printf("\n\nsmallest of all elements in array is %d",small);
	return 0;
}



