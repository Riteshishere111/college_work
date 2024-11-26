// Write a program to input length , breadth, height of a cuboids calculate its value total surface area and length of diagonal.

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int l,b,h,v,TSA,d;
printf("\n Enter the length = ");
scanf("%f",&l);
printf("\n Enter the breadth = ");
scanf("%f",&b);
printf("\n Enter the height = ");
scanf("%f",&h);
 v=l*b*h;
 TSA=2*((l*b)+(b*h)+(h*l));
 d=sqrt((l*l)+(b*b)+(h*h));
 printf("\n value of v=%f,\n value of TSA=%f,\n Value of D=%f",v,TSA,d);
}
