#include<stdio.h>
struct student
{
	int roll_no;
	int marks;
	char name[100];
	char address[100];
}s[1];

int main()
{
	printf("Enter Student Name: ");
	scanf("%s",&s[1].name);
	printf("Enter Student roll no: ");
	scanf("%d",&s[1].roll_no);
	printf("Enter Student marks: ");
	scanf("%d",&s[1].marks);
	printf("Enter Student address: ");
	scanf("%s",&s[1].address);
	
	printf("\n\nName of student is %s\n",s[1].name);
	printf("%s roll no is %d\n",s[1].name,s[1].roll_no);
	printf("%s marks are %d\n",s[1].name,s[1].marks);
	printf("%s's Address is %s\n",s[1].name,s[1].address);
	
	return 0;
	
}
