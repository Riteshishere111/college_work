// Write a menu driven program to input a number and a choice if choice is 1 then increase the number by 20% if choice is 2 decrease the number to 60%
#include <stdio.h>
#include <conio.h>
void main()
{
    int ch;
    float a;
    printf("Enter a number: ");
    scanf("%f", &a);
    printf("Enter 1 to increase number by 20%%\nEnter 2 to decrease number to 60%%");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("%.2f", (a + (20.0 / 100) * a));
        break;
    case 2:
        printf("%.2f", (60.0 / 100) * a);
        break;
    default:
        printf("Wrong choice");
        break;
    }
}
