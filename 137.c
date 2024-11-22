// 
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,p,a,b,x;
    float s;
    p=-1;
    b=-3;
    s=0;
    printf("\n enter a N and X value= ");
    scanf("%d%d",&n,&x);
    for(i=1; i<=n; i++)
    {
        p=p+4;
        b=b+7;
        a=pow(x,p);
        s=s+(1.0*a)/b;
        }
    printf("%f",s);
}