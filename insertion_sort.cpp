#include<stdio.h>
int insertion(int[],int);
int main()
{
	int a[30],n,i;
	printf("enter the no. of element\n");
	scanf("%d",&n);
	printf("enter %d no. of element\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion(a,n);
	return 0;
}
int insertion(int a[30],int n)
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

