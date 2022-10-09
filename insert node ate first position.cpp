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
	int c;
	while(1)
	{
		printf("\n1.to make new node at first\n");
		printf("\n 2.exit\n");
		printf("\n choice\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				{
temp=(node*)malloc(sizeof(node));
		printf("enter the data\n");
		scanf("%d",&temp->data);
		temp->next=start;
		start=temp;
		ptr=start;
		printf("data are:-\n");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
		break;
	}
	case 2:
		exit(0);
		default:
			printf("wrong choice plz enter right\n");
		}
	}
	return 0;
}
