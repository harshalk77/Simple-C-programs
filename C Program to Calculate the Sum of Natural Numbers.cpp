#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("Enter n number: ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	
     printf("The Sum of %d numbers is %d",n,sum);
     
     return 0;
}
