#include<stdio.h>
int main()
{
	float r,l,Bill;  // where r = Rate of Milk and l = liter.
	
	printf("Enter Quantity of milk (in liter): ");
	scanf("%f",&l);
	printf("Enter rate of milk per litre: ");
	scanf("%f",&r);
	
	Bill= r*l*30 ;
	printf("The Monthly milk bill of customer is %f",Bill);
	
	return 0; 
}
