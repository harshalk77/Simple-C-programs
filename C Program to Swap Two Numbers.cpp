#include<stdio.h>
int main()
{
	int a,b,swap;
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("Enter b number: ");
	scanf("%d",&b);
	
	swap=a;
	a=b;
	b=swap;
	
	printf("\nAfter swapping value of a is %d\n",a);
	printf("After swapping value of b is %d\n",b);
}
