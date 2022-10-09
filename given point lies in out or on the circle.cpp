#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,x1,y1,c; 
	printf("enter the center and radius of a circle (x,y) \n");
	scanf("%f%f",&x,&y);
	printf("enter the point to check the conditions \n");
	scanf("%f%f",&x1,&y1);
	c=sqrt(pow(x1,2)+pow(y1,2));
	if(c>y)
	{
	printf("point lies outside the circle");
}
    else if(c<y)
       {
        printf("point lies inside the circle");
    }
		  else
		  {
      printf("point lies on the circle");
  }
return 0;
}
