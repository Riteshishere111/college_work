// Write a program to input a year and check if it is a leap year or not.
#include <stdio.h>
#include <conio.h>
void main()
{  
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        // check if it is a century year
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("\n %d is a leap year", year);
            }
            else
            {
                printf("\n %d is not a leap year", year);
            }
        }
        else
        {
            printf("\n %d is a leap year", year);
        }
    }
    else
    {

        printf("\n %d is not a leap year", year);
    }
}
