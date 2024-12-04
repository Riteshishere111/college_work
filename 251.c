// write a program to input two numbers and swap these numbers using call by reference
#include <stdio.h>
#include <conio.h>
void swap(int *, int *);
void main()
{
    int a, b;
    printf("\nEnter 2 numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nBefore swap in main a=%d, b=%d", a, b);
    swap(&a, &b);
    printf("\nAfter swap in main a=%d, b=%d", a, b);
}
void swap(int *x, int *y)
{
    printf("\nBefore swap in function *x=%d, *y=%d", *x, *y);
    int z;
    z = *x;
    *x = *y;
    *y = z;
    printf("\nAfter swap in function *x=%d, *y=%d", *x, *y);
}