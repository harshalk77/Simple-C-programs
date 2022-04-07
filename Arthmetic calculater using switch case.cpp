#include<stdio.h>
int main()
{
	float a,b,Addition,Substraction,Divison,Multiplication;  // a and b represents integer value 
	char op;  // op = operation 
	
	printf("Enter first number :");
	scanf("%f", &a);
	printf("Enter the operation :");
	scanf(" %c",&op);
	printf("Enter second number :");
	scanf("%f",&b);
	
	switch(op)
	{
	case'+':
	Addition=a+b;
	printf("\n The Addition of two integer is %f", Addition);
	break;
	
	case'-':
	Substraction=a-b;
	printf("\n The Substraction of two integer is %f", Substraction);
	break;
	
	case'/':
	Divison=a/b;
	printf("\n The Divison of two integer is %f", Divison);
	break;
	
	case'*':
	Multiplication=a*b;
	printf("\n The Multiplication of two integer is %f", Multiplication);
	break;
	
	default :
	printf("the operation is not valid");
	}
	
	return 0;
}
