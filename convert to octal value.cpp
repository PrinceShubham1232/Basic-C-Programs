#include<stdio.h>
int main()
{
	int n,i,rev=0,t,r;
	printf("enter the integer");
	scanf("%d",&n);
	i=1;
	t=n;
	while(i<=8)
	{
		r=n%8;
	    rev=rev*10+r;
		t--;
		if(t==0)
		break;
	}
	printf("octal value is : %d",rev);
	return 0;
}
