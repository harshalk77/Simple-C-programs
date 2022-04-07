#include<stdio.h>
int main()
{
	int a=0,b=1,n,i,next;
	next=a+b;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("finonacci:\n");
	printf("%d %d",a,b);
	
	
	for(i=3;i<=n;i++)
	{    
	     printf(" %d",next);
		a=b;
		b=next;
		next=a+b;
	}
	return 0;
}
