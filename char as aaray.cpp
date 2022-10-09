#include<stdio.h>
int main()
{
	int i;
	char name[10];
	
	for(i=0;i<9;i++)
	{
		scanf("%c",&name[i]);
	}
	for(i=0;i<9;i++)
	{
	printf("%c",name[i]);
	}
	return 0;
}
