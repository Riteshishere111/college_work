// Write a program to input the length of a simple pendulum , calculate its time period and frequency.

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float l,t,p;
    printf("\n Enter the length of the pendulum = ");
    scanf("%f",&l);
    t=2*3.14159*sqrt(l,9.8);
    p=1/t;
    printf("\n Time period of the pendulum = %f",t);
    printf("\n Frequency of the pendulum = %f",p);
}
