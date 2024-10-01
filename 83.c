//Write a program to input a number and calculate total number of digits
#include<stdio.h>
#include<conio.h>
void main()
{
int i,r,s,n;
s=0;
printf("Enter a number\n");
scanf("%d",&n);
for(i=n;i>0;i=i/10)
{
    s=s+1;
}
    printf("%d",s);
}