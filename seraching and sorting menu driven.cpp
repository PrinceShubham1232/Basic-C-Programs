#include<stdio.h>
#include<stdlib.h>
int Sequential_search(int[],int,int);
int Binary_search(int [],int,int);
int bubble(int[],int);
int insertion(int[],int);
int main()
{
	int ch;
	while(1)
	{
	printf("\n1.Liner search\n");
	printf("\n2.Binary search\n");
	printf("\n3.Bubble sort\n");
	printf("\n4.Insertion sort\n");
	printf("\n5.Exit\n");
	printf("\n PLEASE ENTER YOUR CHOICE\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
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
			
			break;
	}
			case 2:
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
				
				break;
			}
				case 3:
					{
						int i,a[20],n;
                          printf("enter the no. of element\n");
                           scanf("%d",&n);
                           printf("enter %d no. of element\n",n);
                            for(i=0;i<n;i++)
                         {
	                       scanf("%d",&a[i]);
                                  }
printf("sorted array using bubble sort is:\n");
bubble(a,n);
break;
}
case 4:
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
	break;
	}
	case 5:
		exit(0);
		default:
			printf("\nWrong choice please enter right choice\n");
	}
	}
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
int bubble(int a[],int n)
{
	int i,pass,temp;
	for(pass=0;pass<n-1;pass++)
	{
		for(i=0;i<n-1-pass;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
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

