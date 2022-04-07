#include<stdio.h>
int main()
{
	float f,c;  // where f = Fahrenheit and c = Celsius.
	
	printf("Enter Fahrenheit: ");
	scanf("%f",&f);
	
	c = ((f-32)*5)/9;
	printf("The Temperature in Celsius is %f",c);
	
	return 0;
}
