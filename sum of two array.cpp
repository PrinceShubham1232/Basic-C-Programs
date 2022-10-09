#include<stdio.h>
int main()
{
	int a[20][20],b[20][20],i,j,n,c[20][20];
	printf("enter no. of element\n");
	scanf("%d",&n);
	printf("enter element in matrix 1\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter element in matrix 2\n");
	for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("matrix addition  \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		}
	}
		printf("display added matrix\n");
			for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t ",c[i][j]);
		}
		printf("\n");
	}
		
return 0;
	}

