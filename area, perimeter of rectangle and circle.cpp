#include<stdio.h>
#define pi 3.14
int main()
{
	float l,b,r,a,p,ab,pe;
 printf("enter the lenght,breadth,radius");
 scanf("%f%f%f",&l,&b,&r);
 a=l*b;
 printf("\n area of rectangle is %f",a);
 p=2*(l+b);
 printf("\n perimeter of the rectangle is %f",p);
 ab=pi*r*r;
 printf("\n area of circle is %f",ab);
 pe=2*pi*r;
 printf("\n perimeter of circle is %f",pe);
 return 0;
}
