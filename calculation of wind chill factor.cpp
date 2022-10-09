#include<STDIO.H>
#include<math.h>
int main()
{
	float wcf,t,v;
	printf("enter the temperature : ");
	scanf("%f",&t);
	printf("\nenter the velocity of wind :");
	scanf("%f",&v);
	wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
	printf("\nwind chill factor is eual to : %f",wcf);
	return 0;
}
