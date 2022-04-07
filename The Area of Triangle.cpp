#include<stdio.h>
int main()
{
	float b,h,Area;     // b = base of triangle and h = height of triangle.
	
	printf("Enter base of Triangle: ");
	scanf("%f",&b);
	printf("Enter height of Triangle: ");
	scanf("%f",&h);
	
	Area= (h*b)/2;
	printf("The Area of Triangle is %f",Area);
	
	return 0;
}
