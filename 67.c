// write a menu driven program to input a alphabet and print it is vowel or consonant without using if else.
#include <stdio.h>
#include <conio.h>
void main()
{
    char c;
    printf("Enter a alphabet: ");
    scanf("%c",&c);
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is a Vowel",c);
        break;
    default:
        printf("%c is a consonant",c);
        break;
    }    
}