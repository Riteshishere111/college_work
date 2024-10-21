// Write a program x^7)/11 - x^12)18 + x^17)/25 - x^22)/32 + .........n
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,p,a,b,x;
float s;
p=2;
b=4;
s=0;
printf("\n enter a N and X value= ");
scanf("%d%d",&n,&x);
for(i=1; i<=n; i++)
{
p=p+5;
b=b+7;
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