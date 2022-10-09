// 1
// 12
// 234
// 4567

#include<stdio.h>
int main()
{
	int i,j,n,count=1;
	printf("enter any no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",count);
			count++;
		}
		count--;
		printf("\n");
	}
	return 0;
}
