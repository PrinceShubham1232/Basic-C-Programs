#include<stdio.h>
int Binary_search(int [],int,int);
int main()
{
	int x[20],n,p,i,key;
	printf("enter the no. of elements\n");
	scanf("%d",&n);
	printf("enter the %d elements in sorted order\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		
	}
	printf("enter the element to be searched\n ");
	scanf("%d",&key);
	p=Binary_search(x,n,key);
	if(p==-1)
	printf("serach unsucessful\n");
	else
	printf("searched element is at %d location\n",p);
	return 0;
}
int Binary_search(int a[],int n, int k)
{
	int lo=0,hi=n-1,mid;
	while(lo<=hi)
	{
		mid=(lo+hi)/2;
		if(k==a[mid])
		return(mid);
		if(k<a[mid])
		hi=mid-1;
		else
		lo=mid+1;
	}
	return -1;
		
}
