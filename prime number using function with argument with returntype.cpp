#include<stdio.h>

int prime(int n,int i, int count);

int main()
{
	int n,i=2,r,count=0;
	printf("Enter Positive Integer:");
	scanf("%d",&n);
	r=prime(n,i,count);
	
	if(r==0)
	printf("The Integer is prime");
	else
	printf("The Integer is  not  prime");
	return 0;
}

int prime(int n,int i, int count)
{
		while(i<=n/2)
	{
		if(n%i==0)
		{
		count=1;
		break;
	}
	i++;
}

	return count;	
		
	
}

