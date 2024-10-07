// Write a program to input a number and check if it is prime or composite number. A number is prime if it has only two factors
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
    if (c==2)
    {
    printf("\n%d is a prime number",n);
    }
    else{
        printf("\n%d is a composite number",n);
    }
    
}