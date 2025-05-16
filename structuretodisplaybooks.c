#include <stdio.h>
struct Book {
    char title[20];
    char author[20];
    float price;};
int main() {
    struct Book book;
    printf("Enter book title: ");
    fgets(book.title, sizeof(book.title), stdin);
    printf("Enter author name: ");
    fgets(book.author, sizeof(book.author), stdin);
    printf("Enter price: ");
    scanf("%f", &book.price);
    printf("\nBook Details:\n");
    printf("Title : %s", book.title);
    printf("Author: %s", book.author);
    printf("Price : %f", book.price);
}
