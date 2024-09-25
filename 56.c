//write a program to input number of units ,calculate bill if meter charges is rs 100 for each customer
//for first 100unit =1/u, for next150 unit 4/unit for next 400 unit 9/unit, above 650 unit 15/unit.
#include<stdio.h>
#include<conio.h>
void main()
{
    
int n,bill;
printf("Enter number of units: ");
scanf("%d",&n);
if(n>0&&n<=100){
bill=n*1+100;
}
else if(n<=250){
bill=100*1+(n-100)*4+100;
}
else if(n<=650){
bill=100*1+150*4+(n-250)*9+100;
}
else{
bill=100*1+150*4+400*9+(n-650)*15+100;
}
printf("\nbill= %d",bill);
}