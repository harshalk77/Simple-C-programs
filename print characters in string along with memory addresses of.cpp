#include<stdio.h> 
int main()
{
	char arr[20]="Hello World"; 
     int i;
     for(i=0;arr[i]!=NULL;i++)
     {
     	char *p=&arr[i];
          printf("%c is at %x location \n",arr[i],p);
	}
	
	return 0;
}
