#include<stdio.h>
void strong(int n);

int main()
{    int n;
     printf("Enter number: ");
	scanf("%d",&n);
	strong(n);
	return 0;
}
void strong(int n)
{
	int i,r,sum =0,temp;
	temp=n;
		
	while(n>0)
	{
		int r1=1;
		r=n%10;
		for(i=1;i<=r;i++)
		{
			r1=r1*i;
		}
		
		sum=sum+r1;
		n=n/10;
	}
	
	if(temp==sum)
	printf("The number is Strong");
	else
	printf("The Number Is not Strong");
}

