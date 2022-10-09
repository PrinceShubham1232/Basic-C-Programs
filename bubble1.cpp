#include<stdio.h>
int bubble(int[],int);
int main()
{
	int a[20],n,i;
	printf("enter the no. element\n ");
	scanf("%d",&n);
	printf("enter %d no. of element\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble(a,n);
	return 0;
}
int bubble(int a[],int n)
{
	int p,i,temp;
/*	for(p=0;p<n-1;p++)
	{
		for(i=0;i<n-1-p;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}*/
	for(p=0;p<n;p++)
	{
		for(i=p+1;i<n;i++)
		{
			if(a[i]>a[p])
			{
		
			temp=a[i];
			a[i]=a[p];
			a[p]=temp;
		}
	}}
	printf("sorted array is :");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
