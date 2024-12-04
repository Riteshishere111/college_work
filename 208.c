WAP to input n and r and calculate ncr where ncr= n!/r!(n-r)! using function with return .
#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
int n,r,d,fn,fr,fd,p;
printf("Enter the value of n and r:");
scanf("%d%d",&n,&r);
fn=fact(n);
fr=fact(r);
d=n-r;
fd=fact(d);
p=fn/(fr*fd);
printf("%d",p);
}
int fact(int p)
{
int i,f=1;
for(i=1;i<=p;i++)
{
f=f*i;
}
return f;
}