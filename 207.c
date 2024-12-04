WAP to input a number and check it is perfect number or not using function with return value.

#include<stdio.h>
#include<conio.h>
int check(int);
void main()
{
int n,r;
printf("\n enter a number=");
scanf("%d",&n);
r=check(n);
if(r==n)
{
    printf("\n %d is a perfect number ",n);
}
else{
    printf("\n %d is not a perfect number",n);
}
}
int check(int p)
{
    int  sum = 0;
    for (int i = 1; i <p; i++)
    {
        if (p % i == 0)
        {
            sum =sum + i;
        }
    }
    return sum;
}