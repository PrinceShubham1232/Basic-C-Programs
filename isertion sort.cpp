#include<stdio.h>
int insertion(int[],int);
int main()
{
	int x[20],n,i;
	printf("\n enter number of elements");
	scanf("%d",&n);
	printf("\n enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		
	}
	insertion(x,n);
	return 0;
	
}
int insertion(int a[],int n)
{
	int i,j,key;
	for(j=0;j<n;j++)
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
