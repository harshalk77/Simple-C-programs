#include<stdio.h>
int main()
{
	int a;  // where a = marks
	
	printf("Enter a marks: ");
	scanf("%d",&a);
	
	if(a%2==0)
	{ printf("\n The marks is even.");
	}
	
	else
	{ printf("\n The marks is odd.");
	}
	
	return 0;
}
