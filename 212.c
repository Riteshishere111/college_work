// WAP to input 5 elements into an array calulate sum of all elements
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
    int sum;
    sum = 0;

    for (k = 0; k <= 4; k++) // value print jra rahe he
    {
        sum = sum + ARRAY[k];
    }
    printf("The sum of all elements of array is = %d", sum);
}
