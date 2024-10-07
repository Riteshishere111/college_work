// Write a program to input a number and calculate the factorial value of this number for example if number is 4 factorial = 1*2*3*4=24
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i,fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    fact=1;
    for(i=n;i>0;i--){
        fact=fact*i;
    }
    printf("factorial value of %d is = %d",n,fact);
}