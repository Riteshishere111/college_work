// Write a program to print sum of the series x + x^2 + x^3 + x^4 .......n
#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,n,x,p;
float s;
a=0;p=0;
s=0;
printf("\n enter a number=");
scanf("%d%d",&n,&x);
for(i=1; i<=n;i++)
{
p=p+1;
a=pow(x,p);
s=s+(1.0*a);
}
printf("\n sum=%d",s);
}