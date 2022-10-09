#include<stdio.h>
#include<stdlib.h>
#define MAXSTK 10
struct stack
{
	int top;
	int item[MAXSTK];
};
  typedef struct stack s;
  int IsFull(s *);
  int IsEmpty(s *);
  int  Push(s *,int);
  int Pop(s *);
  int display(s *);
  int main()
  {
   s st;
  	int x;
  	int ch;
  	st.top=-1;
  	while(1)
  	{
  		printf("\n 1-push");
	    printf("\n 2-pop");
	 	printf("\n 3-display");
	    printf("\n 4-quit");
	    	printf("\n Enter your choice \n");
	    	scanf("%d",&ch);
	    	switch(ch)
	    	{
	    		case 1:
	    			{
	    				printf("\n enter the element to be pushed\n ");
	    				scanf("%d",&x);
	    				Push(&st,x);
	    				break;
					}
					case 2:
						{
							Pop(&st);
							break;
						}
						case 3:
							{
								display(&st);
								break;
							}
							case 4:
								{
									exit(0);
								}
								default:
									{
										printf("\n wrong choice please enter correct choice");
									}
								
			}
	  }
	  return 0;
  }
  int IsEmpty(s *s1)
  {
  	if(s1->top==-1)
  	return 1;
  	else
  	return 0;
  }
  int IsFull(s *s1)
  {
  	if(s1->top==MAXSTK-1)
  	return 1;
  	else 
	return 0;
  }
  int Push(s *s1,int x)
  {
  	if(IsFull(s1))
  	{
  		printf("\n Overflow");
  		return 0;
  	}
  	s1->top++;
  	s1->item[s1->top]=x;
  }
  int Pop(s *s1)
  {
  	int x;
  	if(IsEmpty(s1))
  	{
  		printf("\n under flow");
  		
	  }
	  else
	  {
	  	x=s1->item[s1->top];
	  	s1->top--;
	  	printf("\n Popped elemnt is= %d",x);
	  	
	  }
  }
  int display(s *s1)
  {
  	if(IsEmpty(s1))
  	{
  		printf("\n underflow\n");
  		return 0;
	  }
	  printf("\n elemnt =s of stack are \n");
	  for(int i=s1->top;i>=0;i--)
	  {
	  	printf("%d\t",s1->item[i]);
	  }
  }
