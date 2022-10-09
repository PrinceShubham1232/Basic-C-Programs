#include<stdio.h>
int main()
{
	int i,j=1,k=12;
	for(i=1;i<=24;i++)
	{
		if((i>=1)&&(i<=11))
		{
			printf("%d AM \n",i);
		}
		if(i==12)
		{
			printf("%d NOON\n",i);
		}
		if((i>12)&&(i<=23))
		{
			printf("%d PM\n",j);
			j++;
		}
		if(i==24)
		{
			printf("%d MIDNIGHT\n",k);
		}
	}
	return 0;
}
