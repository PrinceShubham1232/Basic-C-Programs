#include<stdio.h>
	struct book
	{
		int roll[30];
		char name[30];
		
		
	};
	int main()
	{
		struct book e[3];
		int i;
		printf("enter the name and roll \n");
		for(i=0;i<3;i++)
		{
		scanf("%c",&e[i].name);
		scanf("%d",&e[i].roll);
	}
		for(i=0;i<3;i++)
		{
		printf("information of %d student:-\n",i+1);
		printf("roll-=%d\n name-%c\n",e[i].roll,e[i].name);
	}
		return 0;
	}
void linkfloat()
{
	int a=0,*b;
	b=&a;
	a=*b;
}
