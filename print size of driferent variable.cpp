#include<stdio.h>

int main()
{
	int n;
	int*p;
	float z;
	float*q;
	double x;
	double *r;
	char y;
	char *s;
	
	printf("Enter a character: ");
	scanf("%c",&y);
	printf("Enter b Number: ");
	scanf("%d",&n);
	printf("Enter c Number: ");
	scanf("%f",&z);
	printf("Enter d Number: ");
	scanf("%lf",&x);
	
	
	p=&n;
	q=&z;
	r=&x;
	s=&y;
	
	printf("\nsize of a variable is %d bytes\n",sizeof(y));
	printf("The value of a variable is %c\n",*s);
	printf("\nsize of b variable is %d bytes\n",sizeof(n));
	printf("The value of b variable is %d\n",*p);
	printf("\nsize of c variable is %d bytes\n",sizeof(z));
	printf("The value of c variable is %f\n",*q);
	printf("\nsize of d variable is %d bytes\n",sizeof(x));
	printf("The value of d variable is %lf\n",*r);
	
	
	return 0;
}

