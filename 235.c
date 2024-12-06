/* WAP to input a matrix of order 3x4, calculate and print the sum of each row individually. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int array[3][4],sum;
    for (int i = 0; i < 3; i++)// row 
    {
    for (int j = 0; j < 4; j++)//column
    {
        printf("INDEX => Row: %d || Colum: %d || Enter Elements :  ",i,j);
        scanf("%d",&array[i][j]);
    }
    }    
    for (int i = 0; i < 3; i++) // row 
    {
        sum=0;
        for (int j = 0; j < 4; j++) //column
        {
            sum = sum + array[i][j];
        }
    printf("\n sum of %d row individually : %d",i,sum);
    }
}
