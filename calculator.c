#include<stdio.h>
#include<conio.h>
void sum(int a,int b)
{
int x;
x=a+b;
printf("\n%d",x);
}
void sub(int y,int z)
{
int c;
c=y-z;
printf("\n%d",c);
}
void multiple(int f,int r)
{
int g;
g=f*r;
printf("\n%d",g);
}
void divide(int d,int s)
{
int w;
w=d/s;
printf("\n%d",w);
}
int main()
{
int q,k;
printf("enter any one number");
scanf("\n%d",&q);
printf("enter any one number");
scanf("\n%d",&k);
sum(q,k);
sub(q,k);
multiple(q,k);
divide(q,k);
return 0;
}