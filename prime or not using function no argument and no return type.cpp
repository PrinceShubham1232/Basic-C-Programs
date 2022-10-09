#include<stdio.h>
#include<conio.h>
      void Prime();
      
    int main()
{  
    Prime();
	getch();
}
void Prime()
{
int n,r=2;
printf("enter any no.");
scanf("%d",&n);
if(n==r)
printf("even prime");
while(r<n)
{
	if(n%r==0)
	break;
	r++;
	}	
	if(r==n)
	printf(" prime no.");
	else
	printf("not a prime number");
	
}

