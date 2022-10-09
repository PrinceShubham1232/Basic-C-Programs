#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the two nos :");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("interchanged nos are : %d %d",a,b);
return 0;
}
