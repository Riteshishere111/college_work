
//         --------------------NOT CODED-----------------
// Write a program to print sum of following series  7 + 26 + 63 + 124............n
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
    for (int i = 0; i < n; i+=3)
    {
        a=i+1;
        s=s+a;
    }
    // print the sum
    printf("sum = %d",s);
    

}