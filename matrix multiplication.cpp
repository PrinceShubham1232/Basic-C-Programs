#include<stdio.h>
int main()
{
	int a[20][20],b[20][20],c[20][20],m,n,i,j,k;
	printf("enter the no. of row and coloum\n");
	scanf("%d%d",&m,&n);
	printf("enter %d no.of element\n",m*n);
	for(i=0;i<m;i++)
	{
     	for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}}
		printf("matrix 1 is\n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
		}
		printf("enter element for 2 matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}}
		printf("matrix 2 is\n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
			}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			int sum=0;
			for(k=0;k<n;k++)
			sum=sum+a[i][k]*b[k][j];

		c[i][j]=sum;
}
	}
	printf("multiplied matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
}
printf("\n");
}
return 0;
}
