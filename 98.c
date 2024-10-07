// Write a program to input two number and calculate lcm and hcf of these number FORMULA =first number/second number= lcm/hcf
#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c,hcf,lcm,min,i;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    if (a<b)
    {
        min=a;
    }
    else{
        min=b;
    }
    for(i=min;i>=1;i--){
        if(a%i==0&&b%i==0){
            hcf=i;
            break;
        }
    }
    lcm=(a*b)/hcf;
    printf("\nhcf = %d \n lcm =%d",hcf,lcm);

    
}