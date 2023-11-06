#include <stdio.h>
struct book 
{
    char title[100];
    char author[100];
    char publication[100];
    float price;
};
void main() 
{
    struct book books[3];
    for (int i = 0; i < 3; i++) 
    {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Publication: ");
        scanf("%s", books[i].publication);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }
    printf("Book Information:\n");
    for (int i = 0; i < 3; i++) 
    {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Publication: %s\n", books[i].publication);
        printf("Price: $%.2f\n", books[i].price);
    }
}
