#include<stdio.h>
int main()
{
	float a,b,add,sub,mul,div;
	char op;
	
	printf("Operation: ");
	scanf("%c",&op);
	printf("Enter first number: ");
	scanf("%f",&a);
	printf("Enter Second number: ");
	scanf("%f",&b);
	
	switch(op)
	{
		case'+':
		add=a+b;
		printf("Addition of two number is %f",add);
		break;
		
		case'-':
		add=a-b;
		printf("Substraction of two number is %f",sub);
		break;
		
		case'*':
		add=a*b;
		printf("Multiplication of two number is %f",mul);
		break;
		
		case'/':
		add=a/b;
		printf("Division of two number is %f",div);
		break;
		
		default:
		printf("Invalid Input!");
	}
	
	return 0;
}
