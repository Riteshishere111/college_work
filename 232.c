//WAP to input a matrix of order 2 by 3 and calculate sum of  all elements.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][3],i,j,s=0;
for(i=0;i<=1;i++) // for row of matrix
{
for(j=0;j<=2;j++) // for column of matrix
{
printf("\n Enter a matrix of 2x3= ");
scanf("%d",&a[i][j]);
}
}
for(i=0; i<=1; i++)
{
for(j=0; j<=2; j++)
{
s=s+a[i][j];
}
}
printf("sum=%d",s);
}



