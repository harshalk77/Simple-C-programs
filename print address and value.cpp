#include<stdio.h>

int main()
{
	int n;
	int*p;
	
	printf("Enter a Number: ");
	scanf("%d",&n);
	
	p=&n;
	printf("\nAddress of p variable is %x\n",p);
	printf("The value of p variable is %d",*p);
	
	return 0;
}
