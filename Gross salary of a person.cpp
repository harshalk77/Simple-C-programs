#include<stdio.h>
int main()
{
   int gross_salary, b, da, ta;  // where b = basic salary , da = dearness allowance and ta = Transport Allowance.
 
   printf("Enter basic salary of an Employee : ");
   scanf("%d", &b);
 
   da = (80 * b) / 100;
   ta = (20 * b) / 100;
 
   gross_salary = b + da + ta;
 
   printf("\nGross salary of an Employee : %d \n", gross_salary);
   return 0;
}
