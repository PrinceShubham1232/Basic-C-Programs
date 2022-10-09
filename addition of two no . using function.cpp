#include<stdio.h>
#include<conio.h>
int Add(int,int);
int main()
{
	int a,b,q;
	printf("enter any two number");
	scanf("%d%d",&a,&b);
	q= Add(a,b);
	printf("added value is %d",q);
	getch();
}
int Add(int x,int y)
{
	return(x+y);
}

