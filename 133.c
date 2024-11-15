//Write a program to print sum of series 1 - x^1)/3 + x^4)/7 - x^9)/11 +...............n
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,p,a,b,x;
float s;
b=-1;
s=1;
printf("\n enter a N and X value= ");
scanf("%d%d",&n,&x);
for(i=1; i<=n; i++)
{
p=i*i;
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