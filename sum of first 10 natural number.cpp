#include <stdio.h>
int main()
{
    int i,sum=0;

    printf("The first 10 natural number are :\n");
 
    for (i=1; i<=10;i++)
    {
        sum=sum+i;
        printf("%d\n",i);    
    }
    printf("\n The Sum of 1st 10 natural number is  %d\n", sum);
}
