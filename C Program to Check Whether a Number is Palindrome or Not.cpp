#include<stdio.h>
int main()
{
	int n,reverse=0,remainder,original;
	
	printf("Enter the integer: ");
	scanf("%d",&n);
	original=n;
	
	while(n!=0)
	{
		remainder = n % 10;
		reverse=reverse*10+remainder;
		n=n/10;
	}
	if(original == reverse)
	{
		printf("The enterd number is palindrome.");
	}
	else
	{
		printf("The entered number is not palindrome.");
	}
	
	return 0;
}
