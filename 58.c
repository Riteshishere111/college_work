// write a program to input number of days and type of room (a for ac and n for non-ac). calculate total charges if room service charge is 50perday for each type of room.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r;
    char type;
    printf("Enter the number of days: ");
    scanf("%d",&n);
    printf("\nEnter the type of room 'a' for AC and 'n' for non-ac: ");
    scanf(" %c",&type);
    if(type=='a'){
        if(n>0&&n<=5){
            r=5000*n+50*n;
        }
        else if(n<=15){
            r=5*5000+(n-5)*4500+50*n;
        }
        else if(n<=40){
            r=5*5000+10*4500+(n-15)*4200+n*50;
        }
        else{
            r=5*5000+10*4500+25*4200+(n-40)*3500+n*50;
        }
    }
    else{
        if(n>0&&n<=5){
            r=3000*n+50*n;
        }
        else if(n<=15){
            r=5*3000+(n-5)*2700+50*n;
        }
        else if(n<=40){
            r=5*3000+10*2700+(n-15)*2500+n*50;
        }
        else{
            r=5*3000+10*2700+25*2500+(n-40)*2000+n*50;
        }
    }
    printf("\nrent=%d",r);
    
}