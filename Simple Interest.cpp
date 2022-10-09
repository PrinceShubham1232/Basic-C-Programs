//calculation of simple interest
/*date 19 june 2021 */
#include<stdio.h>
int main()
{
	int p;
	float t,r,si,e;
	printf("enter the value of p,r,t\n");
	scanf("%d%f%f",&p ,&r , &t);
	si=p*r*t/100;
	printf("\nSimple interest is=%f",si);
	e= si+p;
	printf("\n  simple interest+principle=%f",e);
	return 0;
}
