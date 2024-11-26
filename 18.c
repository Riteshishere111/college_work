// Write a program to input the length of a square and calculate its area.

#include <stdio.h>
#include <conio.h>
#include<math.h>
void main()
{
    int a,b;
    float c;
    printf("\n Enter the bace value=");
    scanf("%d",&a);
    printf("\n Enter the power value= ");
    scanf("%d",&b);
    c=pow(a,b);
printf("\n power of %d,%d =%.2f",a,b,c);
}
