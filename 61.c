// Write a menu driven program to input a choice and print the following.
// if choice is 1 print BCA,2 print MCA,3 print MBA
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter a choice\n1 to print BCA \n2 to print MCA \n3 to print MBA\nEnter NOW:  ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("\nBCA");
        break;
    case 2:
        printf("\nMCA");
        break;
    case 3:
        printf("\nMBA");
        break;
    default:
        printf("Wrong choice");
        break;
    }
}