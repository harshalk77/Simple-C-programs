#include<stdio.h>
int maximum(int a,int b,int c);

int main()
{
	int a, b, c, r;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("Enter 3rd number: ");
	scanf("%d",&c);
	
	r=maximum(a,b,c);
	printf("%d is maximum among 3",r);
	return 0;
}

int maximum(int a,int b,int c)
{
	if(a>b)
	{
	if(a>c)
	return a;
	else
	return c;
}
	else
	{
		if(b<c)
		return b;
		else
		return c;
		
	}
}
