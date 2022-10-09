#include<stdio.h>
#include<stdlib.h>
struct link
{
	int data;
	struct link *next;
};
typedef struct link node;
int main()
{
	node *ptr,*start;
	char ch;
	int item,i,n;
	ptr=(node*)malloc(sizeof(node));
	start=ptr;
	printf("enter the value\n");
	scanf("%d",&item);
	ptr->data=item;
	printf("do you want to make more node");
	fflush(stdin);
	scanf("%c",&ch);
	while(ch=='y'||ch=='Y')
	{
		ptr->next=(node*)malloc(sizeof(node));
		ptr=ptr->next;
		printf("enter the value\n");
		scanf("%d",&ptr->data);
		printf("do you want to make more node\n");
		fflush(stdin);
	scanf("%d",&ch);
	}
	ptr->next=NULL;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}

