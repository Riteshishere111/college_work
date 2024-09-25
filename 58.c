// write a program to input number of days and type of room (a for ac and n for non-ac). calculate total charges if room service charge is 50perday for each type of room.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,ac,nac;
    char type;
    printf("Enter the number of days: ");
    scanf("%d",&n);
    printf("\nEnter the type of room 'a' for AC and 'n' for non-ac: ");
    scanf(" %c",&type);
        if(n>0&&n<=5){
            ac=5000*n+50*n;
            nac=3000*n+50*n;
        }
        else if(n<=15){
            ac=5*5000+(n-5)*4500+50*n;
            nac=5*3000+(n-5)*2700+50*n;
        }
        else if(n<=40){
            ac=5*5000+10*4500+(n-15)*4200+n*50;
            nac=5*3000+10*2700+(n-15)*2500+n*50;
        }
        else{
            ac=5*5000+10*4500+25*4200+(n-40)*3500+n*50;
            nac=5*3000+10*2700+25*2500+(n-40)*2000+n*50;
        }
        if(type=='a'){
        printf("\nrent=%d",ac);
        }
        else{
        printf("\nrent=%d",nac);
        }
    }
    
