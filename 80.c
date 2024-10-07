//Write a program to print first n odd number
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("\n enter the value of n");
scanf("%d",&n);

   int i;
    for(i=1;i<=n;i+=2){
        printf("%d\n",i);
    }
}
