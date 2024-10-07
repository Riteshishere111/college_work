//Write a program to input a number and print only factor of this number. for example if number is 8 1,2,4,8
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,c;
    printf("Enter a number: ");
    scanf("%d", &n);
            printf("factors of %d= ",n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
}