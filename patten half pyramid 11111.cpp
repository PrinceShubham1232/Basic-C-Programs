// 1
// 11
// 111
// 1111

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" 1 ");
		}
		printf("\n");
	}
	return 0;
}
