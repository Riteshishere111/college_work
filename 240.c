//
#include <stdio.h>
#include <conio.h>
int main()
{
    int array1[3][4],n,i,j;
    ;
    printf("Enter a first array: ");
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {

            scanf("%d", &array1[i][j]);
        }
    }
    printf("Enter a number to check it is in matrix: ");
    scanf("%d", &n);

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {

            if (n==array1[i][j])
            {
                printf("%d exist in array",n);
                break;
            }
        }
         if (i&&j==3)
            {
                printf("%d exist in array",n);
                break;
            }
    
    }
}
