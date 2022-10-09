#include<stdio.h>
int main()
{
	int a=0,b=1,c=a+b;
	int num;
	printf("enter any number to find fibonacci series \n");
	scanf("%d",&num);
	if(num==1)
	printf("0");
	if(num==2)
	printf("01");
	if(num>2)
	{
		printf("01");
		for(int i=2;i<=num-1;i++)
		{
			printf("%d",c);
			a=b;
			b=c;
			c=a+b;
		}
	}
	return 0;
}
