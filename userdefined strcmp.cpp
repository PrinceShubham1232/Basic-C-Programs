#include<stdio.h>
int xstrcmp( char *, char *);
int main()
{
	 char p[]="Abc";
	 char q[]="Abc";
	int a;
	a=xstrcmp(p,q);
	printf("\n %d",a);
	return 0;
}
int xstrcmp(char *p,char *q)
{
	
	while(*p!='\0'&&*q!='\0')
	{
		if(*p==*q)
		{
			
	    p++;
		q++;	
	
		}
		
		else
		{
			
			return(*p-*q);
		}
	}
	return 0;
}
	

