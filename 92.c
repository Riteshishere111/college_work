// Write a program to input a number and check if it is a palindrome number or not. A number is called palindrome if reverse of the number is equal to the number itself for EX.22
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = n; i > 0; i /= 10)
    {
        r =r*10+(i % 10);
    }
    if(r==n){
        printf("\n%d is a palindrome number",n);
    }
    else
    {
        printf("\n%d is not a palindrome number",n);
    }
}