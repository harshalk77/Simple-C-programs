#include<stdio.h>
struct book  
{
	int book_id;
	int price;
	char author[100];  //book_id ,title, author, price.
	char title[100];
}b[1];

int main()
{
	printf("Enter Book title   : ");
	scanf("%s",&b[1].title);
	printf("Enter book's author: ");
	scanf("%s",&b[1].author);
	printf("Enter Book's Id    : ");
	scanf("%d",&b[1].book_id);
	printf("Enter book Price   : ");
	scanf("%d",&b[1].price);
	
	printf("\n\nBook title is %s\n",b[1].title);
	printf("%s's Author is %s\n",b[1].title,b[1].author);
	printf("%s's Book Id is %d\n",b[1].title,b[1].book_id);
	printf("%s's price is %d\n",b[1].title,b[1].price);
	
	return 0;
}
