// Write a program to input a number and calculate reverse of this number. if number is 25 then reverse is 52.
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("reverse of %d = ",n);
    for(i = n; i > 0; i /= 10)
    {

        printf("%d", i % 10);
    }
}