#include<stdio.h>
int Sequential_search(int[],int,int);
int main()
{
	int i,p,x[20],n,key;
	printf("enter the no. of elements\n");
	scanf("%d",&n);
	printf("enter the %d elemnts\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("enter the element to be searched\n");
	scanf("%d",&key);
	p=Sequential_search(x,n,key);
	if(p==-1)
	printf("search unsucessful\n");
	else
	printf("the element is at %d location\n",p);
	return 0;
}
int Sequential_search(int a[],int n,int k)
{
	for(int i=0;i<n;i++)
	{
		if(k==a[i])
		{
		return i;
	}
}
return -1;
}
