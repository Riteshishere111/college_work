// Write a program to input 5 elements into an array and swap first element with last element,second element with second last and so on..
#include <stdio.h>
#include <conio.h>
void main()
{
    int black[5], white[5], i, j, k, l,temp;
    for (i = 0; i <= 4; i++)
    {
        printf("Enter the value for index %d: ", i);
        scanf("%d", &black[i]);
    }
    for (k = 0; k <= 4; k++)
    {
        printf("\nBefore swapping Array[%d]= %d: ", k, black[k]);
    }

    for (j = 0; j <= 2; j++)
    {
        // Method 1
        temp = black[j];  
        black[j]=black[4-j];
        black[4-j]=temp;

    //  Method 2 can be done by copy REVERSED to  array to another array[5]  (like if array is 1 2 3 4 5 then store it like black[4-j] resulting in 5 4 3 2 1) then copy this reversed array back to array 1

    }
    for (l = 0; l <= 4; l++)
    {
        printf("\nAfter swapping Array[%d]= %d", l, black[l]);
    }
}