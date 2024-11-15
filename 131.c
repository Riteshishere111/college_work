// Write a program to print sum of series (x^4)/9,- x^7)/13, + x^10)/17, - x^13/21 +............n 
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,p,a,b,x;
float s;
p=1;
b=5;
s=0;
printf("\n enter a N and X value= ");
scanf("%d%d",&n,&x);
for(i=1; i<=n; i++)
{
p=p+3;
b=b+4;
a=pow(x,p);
if(i%2==0)
{
s=s-(1.0*a)/b;
}
else
{
s=s+(1.0*a)/b;
}
}
printf("%f",s);
}