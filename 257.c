// Write a program to input name age and percentage of 5 students and display with proper message using structre
#include <stdio.h>
struct students
{
    char name[50];
    int age;
    float percentage;
};
struct students person[5];
void main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter the name of person %d: ", i + 1);
        scanf(" %s", &person[i].name);
        printf("\nEnter the age of person %d: ", i + 1);
        scanf(" %d", &person[i].age);
        printf("\nEnter the percentage of person %d: ", i + 1);
        scanf(" %f", &person[i].percentage);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nThe name of person %d : %s", i + 1, person[i].name);
        printf("\nThe age of person %d : %d", i + 1, person[i].age);
        printf("\nThe percentage of person %d : %.2f", i + 1, person[i].percentage);
    }
}