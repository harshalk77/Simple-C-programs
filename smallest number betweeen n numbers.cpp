#include<stdio.h>
int main()
{
    int n,a[n],i,small;
 
    printf(" Enter Number of Elements in Array :");
    scanf("%d",&n);
 
    printf(" \n Enter the Elements: ");
    for(i=0 ; i < n ; i++)
{
	scanf("%d",&a[i]);
}
    small = a[0];
 
    for(i = 0 ; i < n ; i++)
    {
        if ( a[i] < small )
            small = a[i];
    }
 
    printf(" Smallest Element in the Array is : %d",small);
    
    return 0;
}
 
