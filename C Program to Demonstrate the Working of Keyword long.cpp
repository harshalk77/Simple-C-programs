#include<stdio.h>
int main()
{
	int a;
	long b;
	long long c;
	double d;
	long double f;
	
	printf("\nSize int type is %d bytes\n",sizeof(a));
	printf("Size long int type is %d bytes\n",sizeof(b));
	printf("Size long long type is %d bytes\n",sizeof(c));
	printf("Size double type is %d bytes\n",sizeof(d));
	printf("Size long double type is %d bytes\n",sizeof(f));
	
	return 0;
}
