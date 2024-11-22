// 
#include <stdio.h>
#include <conio.h>
void main()
{
    for (int i = 9; i >= 5; i--)    // rows
    {
        for (int j = 9; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}