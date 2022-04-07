#include<stdio.h>
int main()
{
int i;
int arr[5];
int search;
printf("Enter the element you want to search=");
scanf("%d",&search);
printf("Enter elements in array:\n");
for(i=0;i<=4;i++)
{
	scanf("%d",&arr[i]);
}

for(i=0;i<=4;i++)
{
if(arr[i]==search)
{
break;
}
}
if(i<=4) 
{printf("The % d element is present %d index",search,i);
}
else
{printf("The element is not found in an array");
}
return 0;
}



