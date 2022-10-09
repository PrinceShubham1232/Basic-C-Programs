#include<stdio.h>
int binary(int [],int,int);
int main()
{
	int i,a[20],n,key,p;
	printf("enter the no. of element\n");
	scanf("%d",&n);
	printf("enter %d no. of elements in sorted order for binary search\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("enter the element to be searched\n");
	scanf("%d",&key);
	p=binary(a,n,key);
	if(p==-1)
	{
		printf("search unsuccesful\n");
	}
	else
	{
		printf("the element %d is found at %d location",key,p);
	}
}
int binary(int a[],int n,int k)
{
	int lo=0,hi=n-1,mid;
	while(lo<=hi)
	{
	mid=(lo+hi)/2;
	if(a[mid]==k)
	return(mid);
	if(a[mid]<k)
	{
		lo=mid+1;
		
	}
	else
	{
		hi=mid-1;
	}
}
return -1;
}
