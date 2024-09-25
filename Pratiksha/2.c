#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
char ch;
printf("\n enter two numbers=",a,b);
scanf("%d %d",&a,&b);
printf("\n enter a operator = : + for sum \n - for subtraction\n / for divide\n * for product");
scanf(" %c",&ch);
switch (ch)
{
case '+':
printf("\n %d ",a+b);
break;
case '-':
printf("\n %d ",b-a);
break;
case '/':
printf("\n %d ",a/b);
break;
case '*':
printf("\n %d ",a*b);
break;
default:
printf("\n wrong choice");
}
}