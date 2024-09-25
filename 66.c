// Write a menu driven program to input a number and a choice if choice is 1 check number is even or odd if choice is 2 check number is buzz or not also print error message for each wrong choice
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, ch;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter 1 to check if it is even or odd\nEnter 2 to check if it is a buzz number: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        if (n % 2 == 0)
        {
            printf("%d is a even number", n);
        }
        else
        {
            printf("%d is a odd number", n);
        }
        break;
    case 2:
        if (n % 7 == 0 || n % 10 == 7)
        {
            printf("%d is a buzz number", n);
        }
        else
        {
            printf("%d is not a buzz number", n);
        }
        break;
    default:
        printf("Wrong choice");
        break;
    }
}