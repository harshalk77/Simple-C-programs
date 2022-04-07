#include<stdio.h>
void swap(int *a,int *b);

int main()
{
	int a,b;
	printf("Enter A number: ");
	scanf("%d",&a);
	printf("Enter B number: ");
	scanf("%d",&b);
	swap(&a,&b);
	return 0;
}

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
	printf("\nThe value of A after swapping = %d\n",*a);
	printf("The value of B after swapping = %d\n",*b);
}
