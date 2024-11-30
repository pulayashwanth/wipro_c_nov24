#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void separate_and_print(char s[]) {
    // Using strtok to separate the sentence into words
    char *token = strtok(s, " ");  // Split based on space

    while (token != NULL) {
        // Print each token (word)
        printf("%s\n", token);
        token = strtok(NULL, " ");  // Get the next token
    }
}

int main() {
    char *s = malloc(1024 * sizeof(char)); // Dynamically allocate memory for the input string

    if (s == NULL) {  // Check if memory allocation was successful
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read the input sentence
    scanf("%[^\n]", s);

    // Call the function to split and print the sentence tokens
    separate_and_print(s);

    // Free the allocated memory
    free(s);

    return 0;
}
