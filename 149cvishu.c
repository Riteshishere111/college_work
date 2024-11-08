#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
for(i=5;i<=9;i++)
{
    for(k=1;k<=(9-i);k++)
    {
        printf(" ");
    }
for(j=5;j<=i;j++)
{
    printf("%d",j);
    }
    printf("\n");
}
    }
