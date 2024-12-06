// Write a program to input house no. city name and pincode of 5 persons and display these values using structure
#include <stdio.h>
struct data
{
    char cityName[50];
    int pincode;
    int HouseNo;
};
struct data person[5];
void main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter the name city of person %d: ", i + 1);
        scanf(" %s", &person[i].cityName);
        printf("\nEnter the pincode of person %d: ", i + 1);
        scanf(" %d", &person[i].pincode);
        printf("\nEnter the HouseNo of person %d: ", i + 1);
        scanf(" %d", &person[i].HouseNo);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nThe city name of person %d : %s", i + 1, person[i].cityName);
        printf("\nThe pincode of person %d : %.2d", i + 1, person[i].pincode);
        printf("\nThe HouseNo of person %d : %d", i + 1, person[i].HouseNo);
    }
}