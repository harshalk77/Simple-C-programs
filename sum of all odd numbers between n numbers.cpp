#include<stdio.h>
int main()
{
	int i,n,array[6]={56,97,85,88,99,78};
	int sum=0;
	
	for(i=0;i<6;i++)
	{    if(array[i]%2!=0)
	     {
		sum=sum+array[i];
		}
	}
	printf("The sum of odd numbers= %d",sum);
	
	return 0;
}
