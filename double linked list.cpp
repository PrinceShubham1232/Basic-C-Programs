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
int a;
while(1)
{
printf("\n1.Insert node at first position\n");
printf("\n2.Insert node at any position\n");
printf("\n3.Insert node at end position\n");
printf("\n4.Exit\n");
printf("\nEnter your choice\n");
scanf("%d",&a);
switch(a)
{
	case 1:
		{
			insert_first();
			break;
		}
		case 2:
			{
				insert_any();
				break;
			}
			case 3:
				{
					insert_end();
					break;
				}
				case 4:
					exit(0);
					default:
						printf("\nwrong choice please enter correct option\n");
}
}
return 0;
}

int insert_first()
{
	ptr=start;
	temp=(node*)malloc(sizeof(node));
	printf("enter data\n");
	scanf("%d",&temp->data);
	temp->next=start;
	start->prev=temp;
	temp->prev=NULL;
	start=temp;
	printf("\nData are\n");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
int insert_any()
{
	node *temp1;
	int pos,i;
	ptr=start;
	printf("\n enter the position\n");
	scanf("%d",&pos);
	//using 1 pointer
	for(i=1;i<=pos-2;i++)
	{
		ptr=ptr->next;
	}
	temp=(node*)malloc(sizeof(node));
	printf("\nenter data\n");
	scanf("%d",&temp->data);
	temp->prev=ptr;
	temp->next=ptr->next;
	ptr->next->prev=temp;
	ptr->next=temp;
	//using 2 pointer 
	
	/*for(i=1;i<=pos-1;i++)
	{
		temp1=ptr;
		ptr=ptr->next;
	}
	temp->prev=temp1;
	temp->next=ptr;
	temp1->next=temp;
	ptr->prev temp;*/
	ptr=start;
	printf("\ndata are\n");
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	}
	int insert_end()
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
		ptr=ptr->next;
		}
		temp=(node*)malloc(sizeof(node));
		printf("\nenter data\n");
		scanf("%d",&temp->data);
		ptr->next=temp;
		temp->prev=ptr;
		temp->next=NULL;
		ptr=start;
		printf("\ndata are\n");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
	}

