#include<stdio.h>
int main()
{
	int a,b,c;  // a,b,c represents sides of triangle.
	
	printf("Enter side A: ");
	scanf("%d",&a);
	printf("Enter side B: ");
	scanf("%d",&b);
	printf("Enter side C: ");
	scanf("%d",&c);
	
	if(a==b & b==c)
    {printf("\n The triangle is an Equilateral triangle.");}
	
	else if(a==b || b==c || c==a)
	{printf("\n The triangle is an Isosceles triangle.");}
	else if(a!=b!=c)
	{printf("\n The triangle is an scalene triangle.");}
	
	else
	{printf("invalid input!");}
	
	return 0;	
}
