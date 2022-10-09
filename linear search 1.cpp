#include<stdio.h>
int linear_search(int[],int,int);
int main()
{
	int i,n,a[20],key,p;
	printf("enter the element to be entered\n");
	scanf("%d",&n);
	printf("enter %d no. of element",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched\n");
	scanf("%d",&key);
	p=linear_search(a,n,key);
	if(p==-1)
	{
		printf("search unsuccessfull\n");
	}
	else
	{
		printf("searched element is at location %d",p);
	}
	return 0;
}
int linear_search(int a[],int n,int k)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
		
		return(i);
	}
	else
	{
		return -1;
	}
	}
}
	

