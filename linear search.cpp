#include<stdio.h>
int linear(int[],int,int);
int main()
{
	int i,n,key,a[20],p;
	printf("enter the no. of element\n");
	scanf("%d",&n);
	printf("enter %d no. of element\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		}
		printf("enter the element to serached\n");
		scanf("%d",&key);
		p=linear(a,n,key);
		if(p==-1)
		{
			printf("search unsuccesful\n");
		}
		else
		{
			printf("loation of %d element is %d",key,p);
		}
}
int linear(int a[],int n,int k)
{
	int i;
	for(i=0;i<n;i++)
	{
	if(a[i]==k)
	{
	return(i);
}}
return -1;
}
