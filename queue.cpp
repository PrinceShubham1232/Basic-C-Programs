#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int arr[MAX];
int front=-1,rear=-1;
int insert();
int del();
int display();
int main()
{
	int ch;
	while(1)
	{
		printf("\n 1 INSERT\n");
		printf(" 2 DELETE\n");
		printf("3 DISPLAY\n");
		printf("4 QUIT\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					insert();
					break;
				}
				case 2:
					{
						del();
						break;
					}
					case 3:
						{
							display();
							break;
						}
						case 4:
							exit(0);
							default:
								printf("wrong choice plz enter correct\n");
							}}
							return 0;
						}
						int insert()
						{
							int item;
							if(rear==MAX-1)
	                        {
							printf("overflow\n");
						}
							else
							{
								if(front==-1)
								{
									front=0;
								}
								printf("enter any number\n");
								scanf("%d",&item);
							    rear++;
							    arr[rear]=item;
							}
						}
								int del()
								{
									if(front==-1||front>rear)
									{
										printf("underflow\n");
									}
									else
									{
										printf("the element deleted from queue is=%d",arr[front]);
										front++;
									}
								}
		                           int display()
		                             {
			                          int i;
			                          if(front==-1||front>rear)
			                          {
			                          	printf("underflow\n");
									  }
									  else
									  {
									for(i=0;i<=rear;i++)
									{
		                            printf("%d\t",arr[i]);
									  }
								}
		}
	

