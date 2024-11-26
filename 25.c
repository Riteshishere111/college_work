// Write a program to input length of hypotenuse & perpendicular of a right angle triangle , calculate length of its base.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float h,p,base;
printf("\n Enter the length of the perpendicular = ");
scanf("%f",&p);
printf("\n Enter the length of the Hypotenuse = ");
scanf("%f",&h);
base= sqrt(h*h-p*p);
printf("\n Length of the base =%f",base);
}
