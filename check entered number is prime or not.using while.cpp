#include <stdio.h>
int main()
{
   int n, i, count = 0;        // A prime number is a positive integer that is divisible only by 1 and itself.
 
    printf("Enter Positive Integer: ");
    scanf("%d",&n);
    i=2;
    while( i<=n/2)
    {
        if(n%i==0)
        {
            count=1;  // if condition varies then count will be 1
            break;
        }
        i++;
    }
 
    if (count==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
 
   return 0;
    
}
