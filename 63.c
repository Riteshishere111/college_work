// Write a menu driven program to input a side of square and a choice
// 1 calculate and print area of square,2 print perimeter of square and wrong choice
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, n;
    printf("Enter the side of square: ");
    scanf("%d", &a);
    printf("Enter a choice\n1 to print area of square \n2 to print perimeter of square\nEnter NOW:  ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("\narea of square: %d", (a * a));
        break;
    case 2:
        printf("\nPerimeter of square: %d", (4 * a));
        break;
    default:
        printf("Wrong choice");
        break;
    }
}