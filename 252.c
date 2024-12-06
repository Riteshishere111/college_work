// // Write a program to input length and breadth of rectangle and calculate its area and perimeter using call by reference
// #include <stdio.h>
// #include <conio.h>
// void area(float *, float *);
// void perimeter(float *, float *);
// void main()
// {
//     float l, b;
//     printf("\nEnter Length: ");
//     scanf("%f", &l);
//     printf("\n Enter breath: ");
//     scanf("%f", &b);
//     area(&l, &b);
//     perimeter(&l, &b);
// }
// void area(float *x, float *y)
// {
//     int ar;
//     ar = (*x) * (*y);
//     printf("\n Area of rectangle = %f", ar);
// }
// void perimeter(float *a, float *b)
// {
//     int pr;
//     pr = 2 * (*a) + (*b);
//     printf("\n Perimeter of rectangle = %f", pr);
// }

// Method 2

#include <stdio.h>
void rectangle(int, int, int *, int *);
void main()
{
    int l, b, ar, pr;
    printf("\nEnter Length: ");
    scanf("%d", &l);
    printf("\n Enter breath: ");
    scanf("%d", &b);
    rectangle(l, b, &ar, &pr);
    printf("area=%d perimeter=%d",ar,pr);
}
void rectangle(int a, int b, int *x, int *y)
{
    *x = (a) * (b);
    *y = 2*((a)+(b));
}