#include<stdio.h>
int main()
{
	float x1,x2,y1,y2,x3,y3,a,b;
	printf("enter the first point (x1,y1) \n");
	scanf("%f%f",&x1,&y1);
		printf("enter the second point (x2,y2) \n");
	scanf("%f%f",&x2,&y2);
		printf("enter the first point (x3,y3) \n");
	scanf("%f%f",&x3,&y3);
	a=(y2-y1)/(x2-x1);
	b=(y3-y1)/(x3-x1);
	if(a==b)
{
	printf("points lie on one straight line");
	
	}	
	else
	{
		printf("point dose not lie on one straight line");
		return 0;
	}
}
