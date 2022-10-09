#include<stdio.h>
int circular_shift(int*,int*,int*);
int main()
{
	int x=5,y=8,z=10;
	printf("given values are\n");
	printf("X=%d,Y=%d,Z=%d\n",x,y,z);
	printf("after circular shift\n");
	circular_shift(&x,&y,&z);
	printf("X=%d,Y=%d,Z=%d\n",x,y,z);
	return 0;
}
 int circular_shift(int*a,int*b,int*c)
{
	int temp;
	temp=*a;
	*a=*c;
	*c=*b;
	*b=temp;
	return 0;
	
}
