//write a program to input distance and calculate taxi fare.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,f;
    printf("Enter distance: ");
    scanf("%d",&n);
    if(n>0&&n<=10){
        f=100;
    }
    else if(n<=30){
        f=100+(n-10)*9;
    }
    else if(n<=80){
        f=100+20*9+(n-30)*7;
    }
    else{
        f=100+20*9+50*7+(n-80)*5;
    }
    printf("\nfare =%d",f);
}