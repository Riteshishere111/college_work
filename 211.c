// WAP to input 5 elements into an array and print all the elements in different line with its index number and value.
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
    for (k = 0; k <= 4; k++) // value print jra rahe he
    {

        printf("the value of index %d = %d\n", k, ARRAY[k]);
    }
}
