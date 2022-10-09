#include<stdio.h>
int bubble(int[],int);
int main()
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
