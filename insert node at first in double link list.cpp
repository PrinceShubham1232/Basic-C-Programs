#include<stdio.h>
#include<stdlib.h>
struct link
{
	int data;
	struct link *next;
	struct link *prev;
};
typedef struct link node;
int insert_first();
int insert_any();
int insert_end();
node *ptr,*start,*temp;
int main()
{
 //node *ptr,*start;
// node*temp;
 char ch;
 ptr=(node*)malloc(sizeof(node));
 start=ptr;
 start->prev=NULL;
 printf("\nEnter data\n");
 scanf("%d",&ptr->data);
 printf("\n do you want to make new node\n");
 fflush(stdin);
 scanf("%c",&ch);
 while(ch=='y'||ch=='Y')
 {
 	ptr->next=(node*)malloc(sizeof(node));
 	temp=ptr;
 	ptr=ptr->next;
 	ptr->prev=temp;
 	printf("\nEnter data\n");
 	scanf("%d",&ptr->data);
 	printf("\ndo you want to make new node\n");
 	fflush(stdin);
 	scanf("%c",&ch);
	 }
	 ptr->next=NULL;
	 ptr=start;
	 printf("\n data are\n");
	 while(ptr!=NULL)
	 {
	 	printf("%d\t",ptr->data);
	 	ptr=ptr->next;
		 }
	ptr=start;
	temp=(node*)malloc(sizeof(node));
	printf("enter data\n");
	scanf("%d",&temp->data);
	temp->next=start;
	start->prev=temp;
	temp->prev=NULL;
	ptr=start;
	printf("data are\n");
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
		 }	 
    /* ptr=start;
	temp=(node*)malloc(sizeof(node));
	printf("enter data\n");
	scanf("%d",&temp->data);
	temp->next=start;
	start->prev=temp;
	temp->prev=NULL;
	ptr=start;
	printf("\nData are\n");
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}*/
	return 0;
}
