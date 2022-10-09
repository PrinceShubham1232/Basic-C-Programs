#include<stdio.h>
int main()
{
	int q,num,r,sum=0,i;
	num=1;
	q=num;
	for(i=1;i<=500;i++)
	{
		while(num!=0)
		{
			r=num%10;
			sum=sum+r*r*r;
			num=num/10;
		}
		if(q==sum);
		printf("%d",q);
		r=0;
		sum=0;
		q=i+1;
		num=i+1;
	}
	return 0;
}
