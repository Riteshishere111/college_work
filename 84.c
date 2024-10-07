//Write a program to input a number and calculate sum of square of each digits
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
    r=i%10;
    s=s+(r*r);

}
    printf("%d is the sum of the square of the digits ",s);
}