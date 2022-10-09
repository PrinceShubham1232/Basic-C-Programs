#include<stdio.h>
int main()
{
	float sal;
	printf("enter salary");
	scanf("%f",&sal);
	if(sal>=25000&&sal<=40000?printf("manager\n"):printf("accountant"));
	else
	(sal>=15000&&sal<25000?printf("accountant"):printf("clerk"));
	return 0;
}
