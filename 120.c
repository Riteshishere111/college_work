// Write a program to print sum of following series 3 + 6 + 12 + 24 + 48.................n
#include<stdio.h>
#include<conio.h>
void main()
{
    // variable declaration
    int n,s,a;
    // input of a number
    printf("Enter a number: ");
    scanf("%d",&n);
// initial value of sum
    s=0;
    // loop to sum
    for (int i = 3; i <= n; i=i*2)
    {
        a=i;
        s=s+a;
    }
    // print the sum
    printf("sum = %d",s);
    

}