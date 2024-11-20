// write a program to enter an 5 element in array and arrange the elements un asceding order
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5], i;
    printf("Enter an array: ");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 4; i++) // to find the smallest number
    {
        if (a[i] <= a[0] && a[i] <= a[1] && a[i] <= a[2] && a[i] <= a[3] && a[i] <= a[4])
        {
            a[0]=a[i];
        }
    }
    for (i = 1; i <= 4; i++) // to find the smallest number
    {
        if (a[i] <= a[1] && a[i] <= a[2] && a[i] <= a[3] && a[i] <= a[4])
        {
            a[1]=a[i];
        }
    }
    printf("%d is smallest and %d is bigger then it",a[0],a[1]);
}