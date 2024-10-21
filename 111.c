// Write a program to print fibonacci series 
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a,b,s;
a=-1;
b=+1;
printf("enter a number=");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
    s=a+b;
    a=b;
    b=s;
    printf("%d",s);
}
}