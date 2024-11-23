// WAP input 5 elements and calculate the products of even elements 
#include <stdio.h>
#include <conio.h>
void main()
{
    int ARRAY[5];
    int i;
    printf("Enter five value: ");
    for (i = 0; i <= 4; i++) // value le rahe he
    {
        scanf("%d", &ARRAY[i]);
    }
    int k;
    int pro;
    pro = 1;
 for (k = 0; k <= 4; k++) // value print jra rahe he
{
 if(ARRAY[k]%2==0){
   pro = pro * ARRAY[k];   // 2*4
     }
   }
  printf("The product  of all elements of array is = %d", pro);
}
