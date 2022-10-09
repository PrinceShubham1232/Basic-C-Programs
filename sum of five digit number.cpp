#include<stdio.h>
int main()
{
	int n, a,d1,d2,d3,d4,d5,sum;
	printf("enter the five digit number\n");
	scanf("%d",&n);
	d5=n%10;
	n=n/10;
	d4=n%10;
	n=n/10;
	d3=n%10;
	n=n/10;
	d2=n%10;
	n=n/10;
	d1=n;
	sum=d1+d2+d3+d4+d5;
	printf("sum of digits are = %d",sum);
	return 0;
}
