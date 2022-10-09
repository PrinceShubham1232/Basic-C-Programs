#include<stdio.h>
int main()
{
	int a[10],i,l,s,n;
	printf("enter the no. of element\n");
	scanf("%d",&n);
	printf("enter element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=a[0];
	s=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>l)
		{
			l=a[i];
         }
			if(a[i]<s)
			{
				s=a[i];
			}
		}
			printf("\n smallest is %d",s);
			printf("\n largest is %d",l);
	return 0;
}
