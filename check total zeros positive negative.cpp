#include<stdio.h>
int main()
{
	int n,num,i,j=0,k=0,l=0;
	printf("enter how much no.you want to write");
	scanf("%d",&n);
	printf("enter the number");
	i=1;
	while(i<=n)
	{
		scanf("%d",&num);
		if(num==0)
		{
			j++;
		}
		else if(num>0)
		{
			k++;
		}
		else if(num<0)
		{
			l++;
		}
		i++;
	}
	printf("total no. of zeros are %d\n",j);
	printf("total no. of positive  are %d\n",k);
	printf("total no. of negatives are %d\n",l);
	return 0;
}

