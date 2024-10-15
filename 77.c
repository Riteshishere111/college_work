//Write a program to print first n whole number
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a;
printf("\n enter the value of n");
scanf("%d",&n);
for(i=0; i<=n; i++)
{
    a=i;
    printf("\n%d",a);
}
}