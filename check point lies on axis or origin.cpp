#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the point(x,y) \n");
	scanf("%d%d",&x,&y);
	if(x==0&&y==0)
	{
		printf("point lies on the origin");
	}
	else if(x>y&&y==0)
{
	printf("point lies on the x axis");
	
}
else if(y>x&&x==0)
{
printf("point lies on the y axis");
}
return 0;
}
