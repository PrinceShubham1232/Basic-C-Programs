#include<stdio.h>
int main()
{
	int n,d1,d2,d3,d4,d5,rev;
	printf("enter the number to be reversed \n");
	scanf("%d",&n);
    d5=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
	d3=n%10;
    n=n/10;
	d2=n%10;
    n=n/10;
	d1=n%10;
	rev=d5*10000+d4*1000+d3*100+d2*10+d1;
	printf("reversed no is %d : \n",rev);
	if(rev==n)
	printf("original and reversed no.is equal");
	else
	printf(" reversed no. is not equal to original no.");
	return 0;
}
