#include<stdio.h>
#include<math.h>
# define pi 3.14
int main()
{
	int x,y,degree;
	float r,s;
	printf("enter the cartesian co-ordinate (x,y) \n");
	scanf("%d%d",&x,&y);
	r=sqrt(pow(x,2)+pow(y,2));
	s= atan(y/x);
	printf("In polar co-ordinates form (%f,%f)\n",r,s);
	degree= s*(180/pi);
	printf(" the polar co-ordinate in degree :(%f,%d)",r,degree);
	
	return 0;
}  
