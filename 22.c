// Write a program to input principal, rate and time, calculates simple interest and compound interest.

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float p, rate, time,si,ci;
    printf("\n Enter the principal amount =");
    scanf("%f",&p);
    printf("\n Enter the Time in year  = ");
    scanf("%f",&time);
    printf("\n Enter the Rate of interest =");
    scanf("%f",&rate);
    si= p*rate*time/100;
    ci=p*pow((1+rate/100),time)-p;
    printf("\n Simple interest =%f",si);
    printf("\n Compound interest =%f",ci);
}
