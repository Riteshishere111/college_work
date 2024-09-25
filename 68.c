//Write a menu driven program to input two numbers and an operator if operator is + calculate sum of these numbers if operator is - subtract 2nd number from 1st number if operator is / divide 1st by 2nd if operator is * calculate product of numbers also print error message for wrong choice
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    char ch;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Enter a operator: + for sum , - for subtract, * for product, / to divide = ");
    scanf(" %c",&ch);

    switch (ch)
    {
    case '+':
        printf("%d + %d = %d",a,b,(a+b));
        break;
    case '-':
        printf("%d - %d = %d",a,b,(b-a));
        break;
    case '/':
        printf("%d / %d = %d",a,b,(b/a));
        break;
    case '*':
        printf("%d * %d = %d",a,b,(a*b));
        break;
    
    default:
        printf("Wrong choice");
        break;
    }

}