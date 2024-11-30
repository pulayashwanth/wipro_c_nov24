#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a word is a palindrome
int isPalindrome(const char *word) {
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++) {
        if (tolower(word[i]) != tolower(word[len - 1 - i])) {
            return 0;  // Not a palindrome
        }
    }
    return 1;  // Is a palindrome
}

int main() {
    char sentence[200], word[50];
    int count = 0;

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Tokenize the sentence into words using spaces
    char *token = strtok(sentence, " \n");

    while (token != NULL) {
        // Copy the token to word for checking
        strcpy(word, token);

        // Check if the word is a palindrome
        if (isPalindrome(word)) {
            count++;
        }

        // Get the next word
        token = strtok(NULL, " \n");
    }

    // Output the number of palindromes
    printf("Number of palindromes in the sentence: %d\n", count);

    return 0;
}
