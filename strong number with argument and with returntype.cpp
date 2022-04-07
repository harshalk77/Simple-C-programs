#include<stdio.h>
int strong(int n);

int main()
{
	int n,z;
	printf("Enter number: ");
	scanf("%d",&n);
	z=strong(n);
	if(n==z)
	printf("The number is Strong");
	else
	printf("The Number Is not Strong");
	return 0;
}
 strong(int n)
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
	
	return sum;
	
	
}

