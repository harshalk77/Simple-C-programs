#include<stdio.h>
void maximum(int a,int b,int c);

int main()
{
	int a, b, c;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("Enter 3rd number: ");
	scanf("%d",&c);
	
	maximum(a,b,c);
	return 0;
}

void maximum(int a,int b,int c)
{
	if(a>b)
	{
	if(a>c)
	printf("A is maximum among 3");
	else
	printf("C is maximum among 3");
}
	else
	{
		if(b<c)
		printf("C is maximum among 3");
		else
		printf("B is maximum among 3");
		
	}
}
