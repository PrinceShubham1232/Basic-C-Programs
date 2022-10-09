#include<stdio.h>
#include<stdlib.h>
struct link
{
	int data;
	struct link *next;
};
typedef struct link node;
int first_insert(node*);
int any_insert(node*);
int end_insert(node*);
int first_delete(node*);
int any_delete(node*);
int end_delete(node*);
int search(node*);
node *ptr,*start;
int main()
{
//	node *ptr,*start;
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
	int a;
		while(1)
	{
	printf("\n1.TO INSERT\n");
	printf("2.TO DELETE\n");
	printf("3.TO SEARCH\n");
	printf("4.TO EXIT\n");
	printf("ENTER YOUR CHOICE\n");
	scanf("%d",&a);
switch(a)
		{
		case 1:
				{
					int c;
	printf("\n1.Insert node at first position\n");
	printf("2. Insert node at any specific position\n");
	printf("3.Insert node at end position\n");
	printf("4.To exit\n");
	printf("Enter your choice\n");
	scanf("%d",&c);
	switch(c)
	{
	case 1:
			{
			 first_insert(temp);
		    break;
			}
			case 2:
				{
					 any_insert(temp);
					break;
				}
				case 3:
					{
						 end_insert(temp);
						break;
					}
					case 4:
						exit(0);
						default:
							printf("wrong choice please enter right choice\n");
	break;	
	}
			break;	
			}
		case 2:
		{
			int b;
	printf("\n1.delete node at first position\n");
	printf("2.delete node at any specific position\n");
	printf("3.delete node at end position\n");
	printf("4.To exit\n");
	printf("Enter your choice\n");
	scanf("%d",&b);
	switch(b)
	{
	case 1:
			{
			 first_delete(temp);
				break;
			}
			case 2:
				{
					 any_delete(temp);
					break;
				}
				case 3:
					{
						 end_delete(temp);
						break;
					}
					case 4:
						exit(0);
						default:
							printf("wrong choice please enter right choice\n");
	}
	break;
	}	
		case 3:
			{
				int r;
				r=search(temp);
				if(r==-1)
				{
					printf("\n search unsucessful\n");
					ptr=start;
		printf("data are:-\n");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
				}
				else
				{
				printf("\nsearch successful and data is %d\n",r);
				ptr=start;
		printf("data are:-\n");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}	
				}
				break;
			}
			case 4:
				exit(0);
				default:
					printf("wrong choice please enter right choice\n");
                       break;
}
}
	return 0;
	}
	int first_insert(node *temp)
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
	}
	int any_insert(node *temp)
{
	int pos,i;
	ptr=start;
	printf("\nEnter the position in which you want to create new node\n");
	scanf("%d",&pos);
	for(i=1;i<=pos-2;i++)
	{
	ptr=ptr->next;
	}
        temp=(node*)malloc(sizeof(node));
		printf("enter the data in new node\n");
		scanf("%d",&temp->data);
		temp->next=ptr->next;
		ptr->next=temp;
		ptr=start;
		printf("data are:\n");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
	}
	int end_insert(node *temp)
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
			}
			temp=(node*)malloc(sizeof(node));
			printf("enter data in last:\n");
			scanf("%d",&temp->data);
			ptr->next=temp;
			temp->next=NULL;
			ptr=start;
			printf("data are\n:");
			while(ptr!=NULL)
			{
				printf("%d\t",ptr->data);
				ptr=ptr->next;
			}
	}
	int first_delete(node *temp)
	{
		temp=start;
		start=start->next;
		free(temp);
			ptr=start;
			printf("data are\n:");
			while(ptr!=NULL)
			{
				printf("%d\t",ptr->data);
				ptr=ptr->next;
			}
	}
	int any_delete(node *temp)
	{
		int i,position;
		ptr=start;
		printf("\nenter the position to delete the element\n");
		scanf("%d",&position);
		for(i=1;i<=position-1;i++)
		{
			temp=ptr;
			ptr=ptr->next;
			}
			temp->next=ptr->next;
			free(ptr);
				temp=start;
			printf("data are\n:");
			while(temp!=NULL)
			{
				printf("%d\t",temp->data);
				temp=temp->next;
			}
		}
		int end_delete(node *temp)
		{
			ptr=start;
while(ptr->next!=NULL)
{
	temp=ptr;
	ptr=ptr->next;
}
temp->next=NULL;
free(ptr);
temp=start;
printf("\n data are:\n");
while(temp!=NULL)
{
	printf("%d\t",temp->data);
	temp=temp->next;
}
}
           search(node *temp)
           {
           	int search;
           	ptr=start;
           	printf("enter the data you want to serach\n");
           	scanf("%d",&search);
           	while(ptr!=NULL)
           	{
           		if(ptr->data==search)
           		{
           			return(ptr->data);
				   }
				   ptr=ptr->next;
				 }
				 return(-1);
			   }
		   
	

