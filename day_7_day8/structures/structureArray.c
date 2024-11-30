#include <stdio.h>

int main() {
    // Define the structure
    struct book {
        char name[50];     // Book name
        float price;       // Price of the book
        int no_of_pages;   // Number of pages
    };

    int number;

    // Prompt user for the number of books
    puts("Enter the number of books you need to add:");
    scanf("%d", &number);

    // Create an array of structures to store the books
    struct book books[number];

    // Input details for each book
    for (int i = 0; i < number; i++) {
        printf("Enter details for book %d:\n", i + 1);

        printf("Enter name: ");
        getchar(); // To consume the newline character left by scanf
        fgets(books[i].name, sizeof(books[i].name), stdin);//  fgets reads and write the entire string incuding the spaces in the books[i].name . fgets(where you want to store, max numberoof char it can store (n),input stream)

        printf("Enter price: ");
        scanf("%f", &books[i].price);

        printf("Enter number of pages: ");
        scanf("%d", &books[i].no_of_pages);
    }

    // Display the details of the books
    printf("\nYou entered the following books:\n");
    for (int i = 0; i < number; i++) {
        printf("Book %d:\n", i + 1);
        printf("Name: %s", books[i].name); // `fgets` keeps the newline; no need for `\n` here.
        printf("Price: %.2f\n", books[i].price);
        printf("Number of pages: %d\n", books[i].no_of_pages);
        printf("\n");
    }

    return 0;
}
