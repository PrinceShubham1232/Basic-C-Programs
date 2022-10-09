#include<stdio.h>
void display(int *k,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",*k);
		k++;
		
	}
	
}
int  main()
{
	int a[]={23,34,1,4,34,21,3,1,3,4},b;
	b=sizeof(a)/sizeof(int);//to find size of array
	display(&a[0],b);
	return 0;
}

