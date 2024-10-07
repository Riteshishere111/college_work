// Write a program to input a number and print total number of factor of this number . for ex- if number is 10 = total number of factor = 4
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,c;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    printf("Total number of factors of %d= %d",n,c);
}