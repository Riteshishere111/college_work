// write a program to input monthly income of an employee and calculate income tax if 2% of income tax will be added if income tax is more than 50000
#include<stdio.h>
#include<conio.h>
void main()
{
    float ai,it,mi;
    printf("Enter the monthly income: ");
    scanf("%f",&mi);
    ai=12*mi;
    if(ai>0&&ai<=200000){
        it=0;
    }
    else if(ai>200000&&ai<=500000){
        it=(10.0/100)*(ai-200000);
    }
    else if(ai>500000&&ai<=1000000){
        it=30000+(20.0/100)*(ai-500000);
    }
    else if(ai>1000000){
        it=130000+(30.0/100)*(ai-1000000);
    }
    if(it>50000){
        it=it+(2.0/100)*it;
    }
    printf("\n Income tax=%.2f",it);
}