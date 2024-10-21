// Write a program to print sum of the series  x^3, x^8, x^13, x^18, ...........n
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,a,n,x,p;
float s;
p=-2;
s=0;
printf("\n enter a number= ");
scanf("%d%d",&n,&x);
for(i=1; i<=n;i++)
{
p=p+5;
a=pow(x,p);
s=s+(1.0*a);
}
printf("\n sum=%f",s);
}