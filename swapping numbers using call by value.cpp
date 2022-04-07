#include<stdio.h>
int swap(int a,int b);
int main()
{
	int a,b,c;
	printf("Enter A number:");
	scanf("%d",&a);
	printf("Enter B number:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	swap(a,b);
	return 0;
}
    int swap(int a,int b)
{    printf("\nAfter Swapping=\n");
	printf("A = %d\n",a);
	printf("B = %d",b);
	
}
