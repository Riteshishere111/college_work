/* WAP to input two matrix of order 3x3 and calculate product of these matrix. */

#include <stdio.h>
#include <conio.h>
int main()
{
    int array1[3][3], array2[3][3], array3[3][3];
    ;
    printf("Enter a first array: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &array1[i][j]);
        }
    }
    printf("Enter second array .\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &array2[i][j]);
        }

        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                array3[i][j] = array1[i][j] * array2[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array3[i][j]);
        }
        printf("\n");
    }
}
