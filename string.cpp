#include<stdio.h>
int main()
{
	char name[30];
	printf("enter your name\n");
	//scanf("%[^\n]s",&name); //using scanf function to input string.
	//gets(name); //using gets() and puts () function to input output string.
	//puts(name);
	printf("name is : %s",name);
	return 0;
}
