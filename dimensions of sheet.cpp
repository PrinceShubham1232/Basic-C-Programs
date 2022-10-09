#include<stdio.h>
int main()
{
	int i,t,h,w;
	printf("Enter the dimensions of A0 sheet height x dimensions = ");
	scanf("%d%d",&h,&w);
	printf("Size of different sheets are :\n ");
	for(i=0;i<9;i++)
	{
		printf("A%d:%dx%d\n",i,h,w);
		t=h;
		h=w;
		w=t/2;
	
	}
	return 0;
	}
