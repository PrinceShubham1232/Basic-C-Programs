#include<stdio.h>
class A
{
	int a,b;
	public:
		void get_ab()
		{
			printf("enter two number \n");
			scanf("%d%d",&a,&b);
			
		}
		void put_ab()
		{
			printf("A=%d andB=%d",a,b);
			
		}
};
int main()
{
	A c,d;
	c.get_ab();
	d.get_ab();
	c.put_ab();
	d.put_ab();
	return 0;
	
	
}
