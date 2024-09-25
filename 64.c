// Write a menu driven program to input length and breadth of a rectangle and a choice is 1 calculate and print area of rectangle if choice is 2 calculate and print perimeter of rectangle also print error message for each wrong choice.
#include<stdio.h>
#include<conio.h>
void main()
{
    int l,b,ch;
    printf("Enter length and breadth: ");
    scanf("%d %d",&l,&b);
    printf("Enter a choice: \n1 for area of rectangle\n2 for perimeter of rectangle\nEnter now: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("area of rectangle= %d",(l*b));
        break;
    case 2:
        printf("perimeter of rectangle= %d",(2*l*b));
        break;
    
    default:
        break;
    }
}