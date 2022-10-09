#include<stdio.h>
int main()
{
	int n,i=2;
	printf("enter the no.");
	scanf("%d",&n);
	if(n==2)
	printf("even prime");
	while(i<n)
	{
	if(n%i==0)
	break;
	i++;	
	}
	if(i==n)
	printf("prime number");
	else
	printf("not prime number");
	return 0;
}

