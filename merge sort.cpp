#include<stdio.h>
int merge_sort(int[],int ,int);
int merge(int[],int,int,int);
int main()
{
	int arr[10],i,j,n;
	printf("enter number of element\n");
	scanf("%d",&n);
	printf("enter %d no. of element\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge_sort(arr,0,n-1);
	printf("\n sorted array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
		}
		return 0;
}
int merge_sort(int arr[],int beg,int end)
{
	int mid;
	if(beg<end)
	{
		mid=(beg+end)/2;
		merge_sort(arr,beg,mid);
		merge_sort(arr,mid+1,end);
		merge(arr,beg,mid,end);
	}
}
int merge(int arr[],int beg,int mid,int end)
{
	int i=beg,j=mid+1,index=beg,temp[10];
	while((i<=mid)&&(j<=end))
	{
		if(arr[i]<arr[j])
		{
			temp[index]=arr[i];
			i++;
		}
		else               
		{
			temp[index]=arr[j];
			j++;
		}
		index++;
	}
	if(i>mid)
	{
		while(j<=end)
		{
			temp[index]=arr[j];
			j++;
			index++;
		}
	}
	else
	{
		while(i<=mid)
		{
			temp[index]=arr[i];
			i++;
			index++;
		}
	}
	for(int k=beg;k<index;k++)
	{
		arr[k]=temp[k];
	}
}

