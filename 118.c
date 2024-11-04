// Write a program to print sum of following series 2 + 5 + 10 + 17...................n
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
    for (int i = 0; i < n; i+=1)
    {
        a=i+1;
        s=s+(a*a+1);
    }
    // print the sum
    printf("sum = %d",s);
    

}