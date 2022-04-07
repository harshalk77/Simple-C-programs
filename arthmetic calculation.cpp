#include<stdio.h>
int main()
{
	int i,j;
	int a[3][3],b[3][3],sum[3][3],sub[3][3],mul[3][3];
	float div[3][3];
	printf("Enter elements in A array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{   printf("Element in a[%d][%d] : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter elements in B array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{   printf("Element in b[%d][%d] : ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nSum of array is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{   
		  sum[i][j]=a[i][j]+b[i][j];
		  printf("sum[%d][%d]=%d\n",i+1,j+1,sum[i][j]);
		}
	}
	
	printf("\nSub of array is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{   
		  sub[i][j]=a[i][j]-b[i][j];
		  printf("sub[%d][%d]=%d\n",i+1,j+1,sub[i][j]);
		}
	}
	
	printf("\nmul of array is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{   
		  mul[i][j]=a[i][j]*b[i][j];
		  printf("mul[%d][%d]=%d\n",i+1,j+1,mul[i][j]);
		}
	}
	
	printf("\ndiv of array is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{   
		  div[i][j]=a[i][j]/b[i][j];
		  printf("div[%d][%d]=%.2f\n",i+1,j+1,div[i][j]);
		}
	}
	
	return 0;
		
}



