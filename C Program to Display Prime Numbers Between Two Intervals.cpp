#include<stdio.h>
int main()
{
	int a,b,i,count;
	printf("Enter intervals:\n");
	scanf("%d%d",&a,&b);
	
	printf("\nThe prime number between %d and %d are\n",a,b);
	
	while(a<b)
	{
	     count=0;
	     
	     if(a<=1)
	     {
	     	a++;
	     	continue;
		}
		
		for(i=2;i<=a/2;i++)
	     {
		     if(a % i == 0)
		     {
			   count=1;
			   break;
		     }
	     }
	     if(count==0)
	     {
	     	printf("%d ",a);
		}
	
	a++;
     }
     
     return 0;	
}
