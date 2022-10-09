#include<stdio.h>
int main()
{
	int n,i,s;
	printf("enter the no. you want the multiplication table of: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		s=n*i;
		printf("\n %d*%d=%d",n,i,s);
	}
}
