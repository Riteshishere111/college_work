#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,p,a,b,x,f,j;
float s;
p=-1;
b=1;
s=0;
printf("\n enter a N and X value= ");
scanf("%d%d",&n,&x);
for(i=1; i<=n; i++)
{
p=p+8;
b=b+4;
a=pow(x,p);
f=1;
for(j=1; j<=b; j++)
{
f=f*j;
b=f;
}
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