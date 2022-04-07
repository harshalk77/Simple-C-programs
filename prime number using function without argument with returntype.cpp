#include<stdio.h>

int prime();

int main()
{    int r;
	r=prime();
	
	if(r==0)
		printf("The Integer is prime");
	else
		printf("The Integer is  not  prime");
		
	return 0;
}

int prime()
{         
         	int n,i=2,count=0;
	     printf("Enter Positive Integer:");
	     scanf("%d",&n);
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

