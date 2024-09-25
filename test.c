#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        printf("\n jhansi");
        if(b>c)
        {
            printf("\n kanpur");
        }
        else if(a<c){
            printf("\n Gwalior");
        }
        else
        printf("\n lucknow");
        printf("\n agra");
    }
    else
    printf("\n noida");
    printf("\n india");
}