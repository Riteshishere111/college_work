// Write a program to input a number and calculate sum of all factors using function with return value
#include <stdio.h>
int fact(int);
void main()
{
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fact(n);
}

int fact(int a)
{
    int f,i;
    f=0;
    for(i=1; i<=a; i++)
    {
        if(a%i==0){
            f=f+i;
        }
    }
    return f;
}