#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
void add(int[20][20],int[20][20],int,int);
void sub(int[20][20],int[20][20],int,int);
void mul(int[20][20],int[20][20],int,int);
void tra(int[20][20],int,int);
void main()
{
int i,j,m,n,a[20][20],b[20][20],ch;
cout<<"enter no of row\n";
cin>>m;
cout<<"enter no of column\n";
cin>>n;
cout<<"enter element in matrix 1\n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>a[i][j];
}}
cout<<"enter element in matrix 2\n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>b[i][j];
}}
while(1)
{
cout<<"\n1.addition";
cout<<"\n2.subtraction";
cout<<"\n3.multiplication";
cout<<"\n4.transpose";
cout<<"\n5.exit";
cout<<"\nenter your choice";
cin>>ch;
switch(ch)
{
case 1:
{
add(a,b,m,n);
break;
}
case 2:
{
sub(a,b,m,n);
break;
}
case 3:
{
mul(a,b,m,n);
break;
}
case 4:
{
tra(a,m,n);
break;
}
case 5:
exit(0);
default:
cout<<"\nwrong choice please enter right choice";
}}
getch();
}
void add(int a[20][20],int b[20][20],int m,int n)
{
int d[20][20],i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
d[i][j]=a[i][j]+b[i][j];
cout<<d[i][j];
cout<<" ";
}
cout<<endl;
}}
void sub(int a[20][20],int b[20][20],int m,int n)
{
int c[20][20],i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]-b[i][j];
cout<<c[i][j];
cout<<" ";
}
cout<<endl;
}}
void mul(int a[20][20],int b[20][20],int m,int n)
{
int c[20][20],i,j,k;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
int sum=0;
for(k=0;k<n;k++)
sum=sum+a[i][k]*b[k][j];
c[i][j]=sum;
cout<<c[i][j];
cout<<" ";
}
cout<<endl;
}}
void tra(int a[20][20],int m,int n)
{
int i,c[20][20];
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[j][i];
cout<<c[i][j];
cout<<" ";
}
cout<<endl;
}
}

