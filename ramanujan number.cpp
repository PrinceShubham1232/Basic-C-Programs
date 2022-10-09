#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,x,y,n;
	printf("enter the range");
	scanf("%d",&n);
	for(a=0;a<=n;a++)
	{
		for(b=0;b<=n;b++)
		{
			for(c=0;c<=n;c++)
			{
				for(d=0;d<=n;d++)
				{
					if((a!=b)&&(a!=c)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d))
					{
					x= pow(a,3)+pow(c,3);
					y= pow(b,3)+pow(d,3);
					if(x==y)
					{
						printf("%d",x);
					}
				}
					
				}
			}
		}
		   }
		return 0;
	}

