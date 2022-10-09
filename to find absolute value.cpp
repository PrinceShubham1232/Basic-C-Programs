#include<stdio.h>
int main()
{
	int a;
	printf("enter the number \n");
	scanf("%d",&a);
	if(a<0)
	{
	a=-1*a;
	printf("absolute value of entered no. is : %d",a);
}
else
{
printf("absolute value of no. is : %d",a);
}
return 0;
}
