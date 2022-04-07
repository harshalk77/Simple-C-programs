#include<stdio.h>

void prime(int n,int i, int count);

int main()
{
int n,i=2,count=0;
printf("Enter Positive Integer:");
scanf("%d",&n);

	prime(n,i,count);
	return 0;

}

void prime(int n,int i, int count)
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

		if(count==0)
		printf("The Integer is prime");
		else
		printf("The Integer is  not  prime");
		
	
}

