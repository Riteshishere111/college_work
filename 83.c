// Write a program to input a number and calculate sum of even digit and product of odd digit
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, r, s, n, pro;
    s = 0;
    pro = 1;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (i = n; i > 0; i = i / 10)
    {
        r = i % 10;
        if (r % 2 == 0)
        {
            s = s + r;
        }
        else
        {
            pro = pro * r;
        }
    }
    printf("sum of even digit= %d\nproduct of odd digits=%d", s, pro);
}