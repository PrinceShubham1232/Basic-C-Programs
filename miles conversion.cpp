#include<stdio.h>
#include<math.h>
int main()
{
	int l1,l2,g1,g2;
	float d;
	printf("enter the latitude (l1,l2) :\n ");
	scanf("%d%d",&l1,&l2);
	printf("enter the longitude (g1,g2): \n");
	scanf("%d%d",&g1,&g2);
	d= 3963*acos(sin(l1)*sin(l2)+(cos(l1)*cos(l2))*cos(g2-g1));
	printf("nautical miles betweeen them is : %d",d);
	return 0;
}
