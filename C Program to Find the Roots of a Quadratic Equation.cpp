#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,dis,root1,root2,real,img;
	
	printf("ax2 + bx + c = 0");
	printf("\nEnter Value of a: ");
	scanf("%f",&a);
	printf("Enter Value of b: ");
	scanf("%f",&b);
	printf("Enter Value of c: ");
	scanf("%f",&c);
	
	dis=(b*b)-(4*a*c);
	printf("Discriminent=%.2f",dis);
	
	if(dis>0)
	{
		root1= ((-b)+ sqrt(dis)/2*a);
		root2= ((-b)- sqrt(dis)/2*a);
		printf("\nThe roots of Qudratic equation are %.2f & %.2f ",root1,root2);
	}
	else if(dis==0)
	{
		root1=root2=((-1)*b/2*a);
		printf("\nThe roots of Qudratic equation are %.2f & %.2f ",root1,root2);
	}
	else
	{
	    
	    real=(-b/2*a);
	    img= sqrt(-dis)/2*a;
	    printf("\nThe roots of Qudratic equation are %.2f+%.2fi & %.2f+%.2fi ",real,img,real,img);
	}
	
	
	return 0;
}
