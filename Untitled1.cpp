#include<stdio.h>
int main()
{
	char name[30];
	int price [3],i;
	int no[3];
	printf("enter name price and no \n");
	for(i=0;i<3;i++)
	{
		scanf("%c%d%d",&name,&price[i],&no[i]);
	}
	printf("display\n");
	for(i=0;i<3;i++)
	{
	printf("%c%d%d",name,price[i],no[i]);
	}
	return 0;
}
