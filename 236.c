/* WAP to input a matrix of order 3x2, calculate and print the sum of each column individually. */
#include <stdio.h>

void main()
{
    int a[3][2], i, j, sum;

    // Input the matrix
    printf("Enter a 3x2 matrix:\n");
    for (i = 0; i < 3; i++) // Loop for rows
    {
        for (j = 0; j < 2; j++) // Loop for columns
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate and print the sum of each column
    for (j = 0; j < 2; j++) // Loop for columns
    {
        sum = 0; // Reset sum for each column
        for (i = 0; i < 3; i++) // Loop for rows
        {
            sum += a[i][j]; // Add current row element of column `j`
        }
        printf("Sum of column %d = %d\n", j + 1, sum); // Print sum of the column
    }
}
