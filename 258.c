// Write a program to input a book name , No. of pages , price, publication year of 5 books.
    #include<stdio.h>
    struct Library{
    char name[50];
    int NoOfPages;
    float price;
    int pulication_year;
};
struct Library book[5];
void main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter the name of book %d: ", i + 1);
        scanf(" %s", &book[i].name);
        printf("\nEnter the no. of pages of book %d: ", i + 1);
        scanf(" %d", &book[i].NoOfPages);
        printf("\nEnter the price of book %d: ", i + 1);
        scanf(" %f", &book[i].price);
        printf("\nEnter the publication year of book %d: ", i + 1);
        scanf(" %d", &book[i].pulication_year);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nThe name of book %d : %s", i + 1, book[i].name);
        printf("\nThe no. of pages of book %d : %d", i + 1, book[i].NoOfPages);
        printf("\nThe price of book %d : %.2f", i + 1, book[i].price);
        printf("\nThe publication year of book %d: %d", i + 1,book[i].pulication_year);
    }
}