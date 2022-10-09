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
		node *temp;
	int item;
	char ch,ch1;
	ptr=(node*)malloc(sizeof(node));
	start=ptr;
	printf("\n enter data\n");
	scanf("%d",&item);
	ptr->data=item;
	printf("\n do you want to enter more data\n");
	fflush(stdin);
	scanf("%c",&ch);
	while(ch=='y'||ch=='Y')
	{
		ptr->next=(node*)malloc(sizeof(node));
		ptr=ptr->next;
		printf("\n enter data\n");
		scanf("%d",&ptr->data);
		printf("\n do you want to enter more data\n");
		fflush(stdin);
		scanf("%c",&ch);
		
	}
	ptr->next=NULL;
	ptr=start;
	printf("data are:-\n");
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
		
	}
printf("\nlast node delete\n");
ptr=start;
while(ptr->next!=NULL)
{
	temp=ptr;
	ptr=ptr->next;
}
temp->next=NULL;
free(ptr);
temp=start;
printf("\ndata after last node deleted\n");
while(temp!=NULL)
{
	printf("%d\t",temp->data);
	temp=temp->next;
}
return 0;
}
