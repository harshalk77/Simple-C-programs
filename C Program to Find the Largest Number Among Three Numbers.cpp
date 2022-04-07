#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("Enter 3rd number: ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\n%d is maximum among three number",a);
		}
		else
		{
			printf("\n%d is maximum among three number",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n%d is maximum among three number",b);
		}
		else
		{
			printf("\n%d is maximum among three number",c);
		}
	}
	
	return 0;
}
