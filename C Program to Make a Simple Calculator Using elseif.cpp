#include<stdio.h>
int main()
{
	float a,b,addition,substraction,multiplication,division;
	char op;
	
	printf("Operation: ");
	scanf("%c",&op);
	printf("Enter 1st number: ");
	scanf("%f",&a);
	printf("Enter 2nd number: ");
	scanf("%f",&b);
	
	if (op=='+')
	{
	    addition= a+b;
	    printf("addition of two numbers is %f",addition);
	}
	else if (op=='-')
	{
		substraction=a-b;
		printf("substraction of two numbers is %f",substraction);
	
	}
	else if (op=='*')
	{
		multiplication=a*b;
		printf("multiplication of two numbers is %f",multiplication);
	
	}
	else if (op=='/')
	{
		division=a/b;
		printf("division of two numbers is %f",division);
	
	}
	 else
	
	 {
	 
	printf("invlid input");
}
	
	return 0;
}
