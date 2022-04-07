#include<stdio.h>
struct student
{
	int roll_no;
	int marks;
	char name[100];
	char address[100];
}s[5];

int main()
{ 
     int i;
	for(i=0;i<5;i++)
  {  
     printf("\nEnter Information Of Student %d\n",i+1);
	printf("Enter Student Name: ");
	scanf("%s",&s[i].name);
	printf("Enter Student roll no: ");
	scanf("%d",&s[i].roll_no);
	printf("Enter Student marks: ");
	scanf("%d",&s[i].marks);
	printf("Enter Student address: ");
	scanf("%s",&s[i].address);
  }
  for(i=0;i<5;i++)
  {
    if(s[i].marks>=40)
    {
    	printf("\n\nName of student is %s\n",s[i].name);
	printf("%s roll no is %d\n",s[i].name,s[i].roll_no);
	printf("%s marks are %d\n",s[i].name,s[i].marks);
	printf("%s's Address is %s\n",s[i].name,s[i].address);
	printf("%s Passed exam\n",s[i].name);
    }
    else
    {
    	printf("\n\nName of student is %s\n",s[i].name);
	printf("%s roll no is %d\n",s[i].name,s[i].roll_no);
	printf("%s marks are %d\n",s[i].name,s[i].marks);
	printf("%s's Address is %s\n",s[i].name,s[i].address);
	printf("%s Failed exam\n",s[i].name);
    }
  }
	
	return 0;
	
}
