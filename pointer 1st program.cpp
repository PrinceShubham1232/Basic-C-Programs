#include<stdio.h>
int main()
{
	int *ptr,a;
	a=200;
	ptr=&a;
	printf("address of a is %u \n",ptr);
	printf("value of a is %d",*ptr);
	return 0;
}
