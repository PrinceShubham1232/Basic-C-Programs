#include<stdio.h>
int fibo(int,int,int);
int main()
{
	int old=1,current=1;
	printf("%d%d",old,current);
	fibo(old,current,23);
	return 0;
}
int fibo(int old,int current,int terms)
{
	int newterm;
	if(terms>=1)
	{
		newterm=old+current;
		printf("%d",newterm);
		terms=terms-1;
		fibo(current,newterm,terms);
	}
}
