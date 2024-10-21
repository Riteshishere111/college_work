// Write a program to print sum of the series  1/2 + 3/4 + 5/6 + 7/8 .........n
#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,b,n;
float s;
a=-1;
b=0;
s=0;
printf("\n enter a number");
scanf("%d",&n);
for(i=1; i<=n;i++)
{
  a=a+2;
  b=b+2;
  s=s+(1.0*a)/b;  
}
printf("\n sum=%f",s);
}