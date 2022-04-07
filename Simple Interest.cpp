#include<stdio.h>
int main()
{
	float p,t,r,SI;  //  where P = Principal, R = Rate of Interest, T = Time period And SI = simple interest.
	
	printf("Enter Principal: ");
	scanf("%f",&p);
	printf("Enter Time period: ");
	scanf("%f",&t);
	printf("Enter Rate: ");
	scanf("%f",&r);
	
	SI= ( p*t*r)/100;
	printf("Simple Interest = %f",SI);
	
	return 0;
	
}
