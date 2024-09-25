//write a program to input number of days and calculate the fine of library based on following condition.
//for first 10 days=0,next 10 days=1/d, next 25 days=3/d, above 45 days=5/d
#include<stdio.h>
#include<conio.h>
void main()
{
    int f,n;
    // F= FINE (VARIABLE)
    printf("\nEnter the number of days: ");
    scanf("%d",&n);
    if(n>=0&&n<=10){
        f=n*0;
    }
    else if(n<=20){
        f=10*0+(n-10)*1;
    }
    else if(n<=45){
        f=10*0+10*1+(n-20)*3;
    }
    else{
        f=10*0+10*1+25*3+(n-45)*5;
    }
    printf("\n Fine of %d days = %d",n,f);
}