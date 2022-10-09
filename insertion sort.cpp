#include<stdio.h>
int insertion(int[],int);
int main()
{
	int i,a[20],n;
	printf("enter the no. of element\n");
	scanf("%d",&n);
	printf("enter %d no. of element\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("sorted array using insertion sort is:\n");
	insertion(a,n);
}
int insertion(int a[],int n)
{
	int i,j,key;
	for(j=1;j<n;j++)
	{
		key=a[j];
		i=j-1;
	while((i>-1)&&(a[i]>key))
	{
		a[i+1]=a[i];
		i=i-1;
	}
	a[i+1]=key;
}
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
}

