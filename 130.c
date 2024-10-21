// Write a program to print sum of the series (x^9)/12 + (x^14)/19 + (x^19)/26 + (x^24)/33...........n
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a,b,x,p;
float s;
p=4;
b=5;
s=0; 
printf("\n enter a number=");
scanf("%d%d",&n,&x);
for(i=1; i<=n; i++)
{
p=p+5;
a=pow(x,p);
b=b+7;
s=s+(1.0*a)/b;
}
printf("\nsum=%f",s);
}