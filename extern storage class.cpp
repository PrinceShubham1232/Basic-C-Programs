#include<stdio.h>
int i=0;
void val();
int main()
{
	printf("main i=%d\n",i);
	i++;
	val();
	printf("main i=%d\n",i);
	val();
	return 0;

}
void val()
{
i=100;
printf("val i=%d\n",i);
i++;
}
