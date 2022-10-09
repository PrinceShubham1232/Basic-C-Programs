#include<stdio.h>
int prime_factors(int);
int main()
{
	int a;
	printf("enter the number to find its prime factor\n");
	scanf("%d",&a);
	printf("prime factors are: ");
	prime_factors(a);
	return 0;
	
	}
	int prime_factors(int num)
	{
		int i;
		for(i=2;num>1;i++)
		{
			while(num%i==0)
			{
				printf("%d ",i);
				num=num/i;
			}
		}
		return 0;
		
	}
