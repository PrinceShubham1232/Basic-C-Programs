#include<stdio.h>
#include<conio.h>
      void Prime(int);
      
    int main()
{  
	int n;
	printf("enter any no.");
	scanf("%d",&n);
    Prime(n);
	getch();
}
void Prime(int num)
{
int r=2;
if(num==r)
printf("even prime");
while(r<num)
{
	if(num%r==0)
	break;
	r++;
	}	
	if(r==num)
	printf(" prime no.");
	else
	printf("not a prime number");
	
}

