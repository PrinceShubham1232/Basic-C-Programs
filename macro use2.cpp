#include<stdio.h>
#define MEAN(x,y)((x+y)/2)
#define ABSOLUTE(z)if(z<0)\
        z=z*(-1);\
        else\
        printf("number is already absolute\n");
//#define UPPER_LOWER(s)(TOLOWER(s))
#define BIGGER(b,c,e)if((b>c)&&(b>e))\
                      printf("%d is greater\n",b);\
                      else if((c>b)&&(c>e))\
                      printf("%d is greater\n",c);\
                      else\
                      printf("%d is greater\n",e);
    int main()
    {
    	int n1,n2,n3,r,s,j,k,l,m;
    	char p;
    	printf("enter the two number to find mean\n");
    	scanf("%d%d",&n1,&n2);
    	r=MEAN(n1,n2);
    	printf("mean:%d\n",r);
    	printf("enter the no. to find absolute no.\n");
    	scanf("%d",&n3);
    	ABSOLUTE(n3);
    //	printf("enter the a char to convert upper case to lower case\n");
    //	scanf("%c",&p);
      //  m=UPPER_LOWER(p);
        //printf("lower case is:%c",m);
    	printf("enter the three no. to find biggest of them\n");
    	scanf("%d%d%d",&j,&k,&l);
    	BIGGER(j,k,l);
    	return 0;
    	
    	
    	
	}
        
