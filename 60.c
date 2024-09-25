// write a program to input amount and calculate discount also calculate final amount to be paid.
#include<stdio.h>
#include<conio.h>
void main()
{
    float amount,discount,fa;
    printf("enter the amount: ");
    scanf("%f",&amount);
    if(amount>0&&amount<=10000){
        discount=((5.0/100)*amount);
    }
    else if(amount>10000&&amount<=50000){
        discount=((10.0/100)*amount);
    }
    else if(amount>50000&&amount<=100000){
        discount=((20.0/100)*amount);
    }
    else if(amount>100000){
        discount=((25.0/100)*amount);
    }
    fa=amount-discount;
printf("\namount before discount: %.2f",amount);
printf("\ndiscount of rupees : %.2f",discount);
printf("\namount after discount to be paid: %.2f",fa);
}
