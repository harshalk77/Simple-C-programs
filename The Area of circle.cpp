#include<stdio.h>
int main()
{
	float r,Area;  // r represents radius of circle.
	
	printf("Enter Radius of circle: ");
	scanf("%f",&r);
	
	Area= 3.14*r*r;
	printf("The area of circle is %f",Area);
	
	return 0;
}
