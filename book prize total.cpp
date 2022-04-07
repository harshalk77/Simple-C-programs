#include<stdio.h>
struct book  
{
	int copies;
	int price;
	char author[100];  
	char title[100];
	int t_p_o_b;  // t_p_o_b= total prize of book
	
}b[5],t_p_o_b[5];

int main()
{    int i;
     int t_n_c = 0; // t_n_c = total number of book
	int t_p_a_b=0; // all books prize sum 
       
     for(i=0;i<5;i++)
     {
	printf("\n\nEnter Book %d title: ",i+1);
	scanf("%s",&b[i].title);
	printf("Enter book's author: ");
	scanf("%s",&b[i].author);
	printf("Enter no of copies : ");
	scanf("%d",&b[i].copies);
	printf("Enter book Price   : ");
	scanf("%d",&b[i].price);
     } 
     
     for(i=0;i<5;i++)
     {
     	t_n_c = t_n_c+b[i].copies;
	}
	for(i=0;i<5;i++)
	{
		t_p_o_b[i].t_p_o_b= b[i].copies*b[i].price;
		
		printf("Total prize of %d books of book no %d is %d\n",b[i].copies,i+1,t_p_o_b[i].t_p_o_b);
	}
	for(i=0;i<5;i++)
	{
		t_p_a_b= t_p_a_b + t_p_o_b[i].t_p_o_b;
	}
	for(i=0;i<5;i++)
	{    
		printf("\n\nBook %d title is %s\n",i+1,b[i].title);
	     printf("%s's Author is %s\n",b[i].title,b[i].author);
	     printf("%s's no of copies is %d\n",b[i].title,b[i].copies);
	     printf("%s's price is %d\n",b[i].title,b[i].price);
		
	}
	
	printf("\n\nTotal number of book are %d\n ",t_n_c);
	printf("All books prize sum is %d",t_p_a_b);
	
	
	
	return 0;
}
