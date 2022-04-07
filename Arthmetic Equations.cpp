#include<stdio.h>
int main ()
{
	float a,b,Addition,Substraction,Division,Multiplication;
	printf("Enter 1st number : ");
	scanf("%f",&a);
	printf("Enter 2nd number : ");
	scanf("%f",&b);
	
	Addition=a+b;
	printf("\n Addition of two number = %f", Addition);
	
	Substraction=a-b;
	printf("\n Substraction of two number = %f", Substraction);
	
	Division=a/b;
	printf("\n Division of two number = %f", Division);
	
	Multiplication=a*b;
	printf("\n Multiplication of two number = %f", Multiplication);
	
	return 0;
}
