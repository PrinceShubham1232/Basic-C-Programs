// 1
// 22
// 333
// 4444

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter any no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
			
		}
	printf("\n");
	}
	return 0;
}
