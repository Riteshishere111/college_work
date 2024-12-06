// Write a program to input 1 integer, 1 float and 1 character value using structure
#include <stdio.h>
struct first
{
    int i;
    float f;
    char c;
};
struct first hyy;
void main()
{
    printf("Enter a integer value: \n");
    scanf("%d", &hyy.i);
    printf("Enter a decimal value: \n");
    scanf("%f", &hyy.f);
    printf("Enter a character value: \n");
    scanf(" %c", &hyy.c);
    printf("The value of i= %d, f=%f, c=%c", hyy.i, hyy.f, hyy.c);
}