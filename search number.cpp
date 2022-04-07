#include<stdio.h>
int main()

{   
    int i,j,search,count=0;

	int a[3][3];
	

	printf("Enter elements in array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{   printf("Element in a[%d][%d] : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter Number to search: ");
	scanf("%d",&search);
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==search)
			{
				count=1;
				break;
			}
		}
	
}
if(count==1)
{
	printf("\nNo. %d occurs in array",search);
}
else
{
	printf("\nNo. %d doesn't occurs in array",search);
}
return 0;
}

