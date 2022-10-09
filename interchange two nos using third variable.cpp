#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the two nos \n");
	scanf("%d%d",&a,&b);
	c=b;
	b=a;
	a=c;
	printf("interchanged nos are: %d %d",a,b);
	return 0;
}
