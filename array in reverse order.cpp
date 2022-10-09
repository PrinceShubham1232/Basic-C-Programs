#include<stdio.h>
int main()
{
	int a[10],n,i;
	printf("enter the no. of element\n");
	scanf("%d",&n);
	printf("enter element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("in reverse order\n");
    
    for(i=n;i>=0;i--)
    {
    	printf("%d",a[i]);
    	printf("\n");
	}
	return 0;

	}
