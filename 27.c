//Write a program to input radius and height of a cylender, calculate it's volume, CSA and TSA.
#include<stdio.h>
#include<conio.h>
void main()
{
float r,h,CSA,TSA,vol;
const float pi= 3.14159;
printf("Enter the radius: ");
scanf("%f",&r);
printf("\nEnter the height: ");
scanf("%f",&h);
// for debug check entered values by user
printf("r= %f, h= %f",r,h);

CSA=(2*(pi)*r*h);
TSA=2*(pi)*r*(h+r);
vol=(pi)*r*r*h;
// for debug check raw results
printf("\n csa=%f\nTSA=%f\nvolume=%f",CSA,TSA,vol);

printf("\nCSA= %.2f \nTSA= %.2f \nVolume= %.2f",CSA,TSA,vol);
getch();
}