// 
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k;
    for (i = 9; i >=5; i--)
    {
       for (j =1 ; j>5-i; j--)
       {
        printf(" ");
       }
       for (k = 9; k >= i; k--)
       {
        printf("%d",k);
       }
       printf("\n");
       
    }
    
}