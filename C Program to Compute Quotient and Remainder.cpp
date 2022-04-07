#include<stdio.h>
int main()
{
	int a,b,Remainder;
	int Quotient;
	printf("Enter Dividend: ");
	scanf("%d",&a);
	printf("Enter Divisor: ");
	scanf("%d",&b);
	
	Remainder=a%b;
	Quotient=a/b;
	
	printf("\nThe Reminder is %d\n",Remainder);
	printf("The Quotient is %d",Quotient);
	
	return 0;
	
}
