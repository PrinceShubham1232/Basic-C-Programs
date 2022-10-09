#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("enter the three sides of triangle \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c&&c==a)
	{
		printf("Equilateral traingle");
		
	}
	else if(a==b||b==c||c==a)
	{
		printf("Isosceles Triangle");
		
	}
	else if(a!=b&&b!=c&&c!=a)
	{
		printf("Scalene triangle");
	}
	else if(pow(a,a)==pow(b,b)+pow(c,c)||pow(b,b)==pow(a,a)+pow(c,c)||pow(c,c)==pow(a,a)+pow(b,b))
	{
		printf("Right angled triangle");
		
	}
	return 0;
}
