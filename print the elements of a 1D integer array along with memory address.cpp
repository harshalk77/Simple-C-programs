#include<stdio.h> 
int main()
{
int arr[10]={10,20,30,40,50,60,70,80,90,100};
int i; 
for(i=0;i<=90;i++)
{
	int *p=&arr[i];
     printf("%d is at %x location \n",arr[i],p);
	if(arr[i]>=100) 
	{
		break;
	}
}

return 0;
}
