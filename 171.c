//                                 ~~ Series using Do-While Loop  
/*WAP to follow Series .... 
         1,2,3,4,5.........n terms.*/

#include <stdio.h>
#include<conio.h> 

int main() 
{
    int n, i;

    printf("/n Enter the number of terms: ");
    scanf("%d", &n);
    printf("Series: ");
    i = 1;
    do
    {
        printf("%d , ", i);
        i++;
    } while(i <= n);        
}