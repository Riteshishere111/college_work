// write a program to input length of three side of triangle and check triangle formation is possible or not.Then check if it is right angle triangle or not.
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("\n Enter the value of a: ");
    scanf("%d", &a);
    printf("\n Enter the value of b: ");
    scanf("%d", &b);
    printf("\n Enter the value of c: ");
    scanf("%d", &c);
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("\nTriangle formation is possible");

        if (a > b && a > c)
        {
            if ((b * b + c * c) == (a * a))
            {
                printf("\nThis is a right-angled triangle.");
            }
            else
            {
                printf("\nThis is not a right-angled triangle.");
            }
        }
        else if (b > a && b > c)
        {
            if ((a * a + c * c) == (b * b))
            {
                printf("\nThis is a right-angled triangle.");
            }
            else
            {
                printf("\nThis is not a right-angled triangle.");
            }
        }
        else if (c > a && c > b)
        {
            if ((a * a + b * b) == (c * c))
            {
                printf("\nThis is a right-angled triangle.");
            }
            else
            {
                printf("\nThis is not a right-angled triangle.");
            }
        }
        else
        {
            printf("\nThis is not a right-angled triangle.");
        }
    }
    else
    {
        printf("\nTriangle formation is not possible.");
    }

    getch();
}
