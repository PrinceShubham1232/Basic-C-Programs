#include<stdio.h>
#include"areaperi.h"
int main()
{
	int d,a,b;
	float s1,s2,s3,s,p_t,p_c,p_s,a_t,a_c,a_s;
	float r,base,height;
	printf("\n Enter radius of circle");
	scanf("%f",&r);
	p_c=PERIC(r);
	printf("circumference of circle=%f\n",p_c);
	a_c=AREAC(r);
	printf("area of circle is=%f\n",a_c);
	printf("enter side of a square:");
	scanf("%f",&s);
	p_s=PERIS(s);
	printf("perimeter of square=%f\n",p_s);
	a_s=AREAS(s);
	printf("area of square=%f\n",a_s);
	printf("enter lenght of 3 sides of traingle:");
	scanf("%f%f%f",&s1,&s2,&s3);
	p_t=PERIT(s1,s2,s3);
	printf("perimeter of triangle=%f\n",p_t);
	printf("enter base and height of triangle:");
	scanf("%f%f",&base,&height);
	a_t=AREAT(base,height);
	printf("area of triangle=%f\n",a_t);
	return 0;
}
