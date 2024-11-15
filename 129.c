// Write a program to print sum of the series (x^5)/12 + x^8)/16 + x^11)/20 + x^19/24...........n
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a,b,x,p;
float s;
p=2;
b=8;
s=0; 
printf("\n enter a number=");
scanf("%d%d",&n,&x);
for(i=1; i<=n; i++)
{
p=p+3;
a=pow(x,p);
b=b+4;
s=s+(1.0*a)/b;
}
printf("\nsum=%f",s);
}