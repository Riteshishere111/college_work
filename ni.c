#include<stdio.h>
#include<conio.h>
void main ()
{
    int ch , ar , pari,a;
    printf("\n Choice one case ");
    printf("\n case 1 area of squar \n case 2 perimeter of squar ");
    printf("\n Enter your choice ");
    scanf("%d",&ch);
    printf("\n Enter a number ");
    scanf("%d",&a);
    switch (ch)
    {
    case 1:
        ar=2*a;
        printf("\n %d is a area of squar ",a);
        break;
    case 2:
    pari=4*a;
    printf("\n %d is a perimeter of square ",a);
        break;
    default:
    printf("\n ERROR :: Your chooice Wrong ....");
    }
    }