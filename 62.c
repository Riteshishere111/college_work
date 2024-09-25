// Write a menu driven program to input a choice and print the following.
// choice 1: print bundelkhand case 2: print university
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter a choice\n1 to print Bundelkhand \n2 to print University\nEnter NOW:  ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("\nBundelkhand");
        break;
    case 2:
        printf("\nUniversity");
        break;
    default:
        printf("Wrong choice");
        break;
    }
}