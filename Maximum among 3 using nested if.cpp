#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter A integer: ");
	scanf("%d",&a);
	printf("Enter B integer: ");
	scanf("%d",&b);
	printf("Enter C integer: ");
	scanf("%d",&c);
	
	if (a>b)
	{
		
    if (a>c)
    {printf("\n A is maximum among 3");
	}
	else 
	{printf("\n C is maximum among 3");
    }
    
    }
	
	else
    {
    	
	if (b>c)
	{ printf("\n B is maximum among 3");
	}
	else 
	{printf("\n C is maximum among 3");
    }
    
    }
    
    
	return 0;
}
