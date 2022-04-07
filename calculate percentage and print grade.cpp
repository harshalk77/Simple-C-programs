#include <stdio.h>

int main()
{
 int a,b,c,d,f,add,percentage;  // a,b,c,d,f represents subject marks
 
printf("Enter first subject marks :");
scanf("%d",&a);
printf("Enter second subject marks:");
scanf("%d",&b);
printf("Enter third subject marks :");
scanf("%d",&c);
printf("Enter fourth subject marks:");
scanf("%d",&d);
printf("Enter fifth subject marks :");
scanf("%d",&f);

add=a+b+c+d+f;
percentage=add*100/500;

printf("\n percentage =%d ",percentage );

if(percentage>=90)
{printf("\n Grade A");}

else if (percentage>=80 & percentage<=89)
{printf("\n Grade B");}
else if (percentage>=70 & percentage<=79 )
{printf("\n Grade C");}
else if (percentage>=60 & percentage<=69)
{printf("\n Grade D");}
else if (percentage>=50 & percentage<=59)
{printf("\n Grade E");}
else if (percentage>=40 & percentage<=49)
{printf("\n Pass");}
else if (percentage<40)
{printf("\n fail");}

else
{printf("Invalid Input!");}

return 0;
}
