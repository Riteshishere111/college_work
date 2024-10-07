//Write a program to print first n natural number
#include <stdio.h>
#include <conio.h>
void main()
{
   int n,i,a;
   printf("\n enter the value of n");
   scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=i;
        printf("%d\n",a);
    }
}