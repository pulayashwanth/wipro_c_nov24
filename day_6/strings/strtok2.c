#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_second_word(char *s) {
    char *token;
    int word_count = 0;

    // Use strtok to split the string by space
    token = strtok(s, " ");  // First call to strtok to get the first word

    // Loop through the string to find the second word
    while (token != NULL) {
        word_count++;

        // If it's the second word, print it
        if (word_count == 2) {
            printf("%s\n", token);
            return;  // Exit after printing the second word
        }

        // Get the next token
        token = strtok(NULL, " ");
    }

    // If there is no second word
    printf("No second word found\n");
}

int main() {
    char *s = malloc(1024 * sizeof(char)); // Dynamically allocate memory for the input string

    if (s == NULL) {  // Check if memory allocation was successful
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read the input sentence (including spaces) until the newline character
    scanf("%[^\n]", s);

    // Call the function to print only the second word
    print_second_word(s);

    // Free the allocated memory
    free(s);

    return 0;
}
