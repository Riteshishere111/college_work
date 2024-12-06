// Write a program to input a string and calculate length of string
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int i;
    char name[11];
    printf("Enter a name: ");
    for (i = 0; i <= 10; i++)
    {
        scanf("%c",&name[i]);
    }

    for (i = 0; i <= 10; i++)
    {
        if (name[i] !=("\0"))
        {
            printf("%d",i);
        }
    }
}


