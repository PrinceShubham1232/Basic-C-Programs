#include<stdio.h>
int main()
{
	int r,s,a,y;
	printf("enter the age of Ram ,Shayam, Ajay \n");
	scanf("%d%d%d",&r,&s,&a);
	if(r>s)
	{
		if(r>a)
		{
		printf("Ram is young");
		y=r;
	}
		else
		{
		printf("ajay is young");
		y=a;
	}
	}
	else
	{
		if(s>r)
	{
		printf("shayam is young");
		y=s;
	}
		else
	{
			printf("ajay is young");
		y=a;
	}
	}
	printf(" and is age is %d :",y);
	return 0;
}
