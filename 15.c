// Write a program to input one integer ,decimal , and character , value and print them in different lines with suitable message.

#include <stdio.h>
#include <conio.h>

void main()
{
    int a;
    float b;
    char c;
    printf("\n Enter a integer number=");
        scanf("%d",&a);
    printf("\n Enter a decimal number =");
        scanf("%f",&b);
    printf("\n Enter a character =");
        scanf("%c",&c);
        printf("\n integer value=%d\n Decimal value=%f \n Character value=%c",a,b,c);
}
