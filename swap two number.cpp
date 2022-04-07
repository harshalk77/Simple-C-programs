#include<stdio.h>
void swap(int *a,int *b);
int main()
{
	int a,b;
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("Enter b number: ");
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
	
	printf("\nThe Value of a after swapping is %d\n",*a);
	printf("The Value of b after swapping is %d",*b);
}
