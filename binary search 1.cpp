#include<stdio.h>
int binary(int[],int,int);
int main()

{
	int a[20],i,p,n,key;
	printf("enter the no.of element\n");
	scanf("%d",&n);
	printf("enter %d no. of element in sorted manner \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to serached\n");
	scanf("%d",&key);
	p=(a,n,key);
	if(p==-1)
	{
		printf("search unsuccessful\n");
	}
	else
	{
		printf("element is present at %d location",p);
	}
	return 0;
}
int binary(int a[],int n,int key)
{
	int lo=0,hi=n-1,mid;
	while(lo<=hi)
	{
		mid=(lo+hi)/2;
		if(key==a[mid])
		{
			return(mid);
		if(key<a[mid])
		{
			hi=mid-1;
		}
		else
		{
			lo=mid+1;
		}
		}
	}
	return -1;
}
