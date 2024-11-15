// Write a program to input 5 elements into an array and print only buzz number elements
#include <stdio.h>
#include <conio.h>
void main()
{
    int ARRAY[5];
    int i;
    printf("Enter five value: ");
    for (i = 0; i <= 4; i++) // value le rahe he
    {
        scanf("%d", &ARRAY[i]);
    }
    int k;

    for (k = 0; k <= 4; k++) // value print jra rahe he
    {
        if (ARRAY[k] % 7 == 0 || ARRAY[k] % 10 == 7)
        {
            printf("numbers are  = %d \n",ARRAY[k]);
        }
    }
}
