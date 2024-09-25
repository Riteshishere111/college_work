//write a program to input character and check if it is vowel or consonant.
#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
    {
        printf("\n %c is a vowel",c);
    }
    else{
        printf("\n %c is a consonant",c);
    }
}