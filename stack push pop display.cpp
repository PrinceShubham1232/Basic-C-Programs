#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top=-1;
int arr[MAX];
int push(int);
int pop();
int display();
int main()
{
	int ch,num;
	while(1)
	{
		printf("\n 1 PUSH\n ");
		printf("2 POP \n");
		printf("3 DISPLAY \n");
		printf("4 QUIT \n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					printf("enter element \n");
					scanf("%d",&num);
					 push(num);
					 break;
					}
					case 2:
						{
							pop();
							break;
						}
						case 3:
							{
								display();
								break;
							}
							case 4:
								{
									exit(0);
								}
								default:
									{
									printf("wrong choice please enter right choice\n");	
									}
				}
		}
		return 0;
	}
	int push(int x)
	{
		if(top==MAX-1)
		{
			printf("\n stack overflow");
			return 0;
		}
		top++;
		arr[top]=x;
	}
	int pop()
	{
		int r;
		if(top==-1)
		{
			printf("\n stack underflow");
		}
		else
		{
			r=arr[top];
			top--;
		printf("\n popped element=%d\n",r);
		}
	}
	int  display()
	{
		if(top==-1)
		{
			printf("\n stack underflow\n");
		}
		for(int i=top;i>=0;i--)
		{
			printf("%d \t",arr[i]);
		}
		}
	

