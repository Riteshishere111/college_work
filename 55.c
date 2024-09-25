//write a program to input character and check if it is vowel or consonant.
#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if(c=='a'||c=='A')
    {
        printf("\n %c is a vowel",c);
    }
    else if(c=='e'||c=='E')
    {
        printf("\n %c is a vowel",c);
    }
    else if(c=='i'||c=='I')
    {
        printf("%c is a vowel",c);
    }
    else if(c=='o'||c=='O')
    {
        printf("\n %c is a vowel",c);
    }
    else if(c=='u'||c=='U')
    {
        printf("\n %c is a vowel",c);
    }
    else{
        printf("\n %c is a consonant",c);
    }
}