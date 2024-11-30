// strtok()

// //The strtok() function splits a string into multiple pieces (referred to as "tokens") using delimiters

#include <stdio.h>

char *strtok(char *str, const char *delim) {
    static char *nextToken = NULL;
    if (str) {
        nextToken = str;
    }
    if (!nextToken) {
        return NULL;
    }

    char *tokenStart = nextToken;

    // Move nextToken to the first non-delim character
    while (*nextToken && strchr(delim, *nextToken)) {
        nextToken++;
    }

    if (*nextToken == '\0') {
        return NULL;
    }

    tokenStart = nextToken;

    // Move nextToken to the next delim character
    while (*nextToken && !strchr(delim, *nextToken)) {
        nextToken++;
    }

    if (*nextToken) {
        *nextToken = '\0';
        nextToken++;
    } else {
        nextToken = NULL;
    }

    return tokenStart;
}

int main() {
    char str[100], delim[10];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter delimiters: ");
    fgets(delim, sizeof(delim), stdin);

    printf("Tokens:\n");
    char *token = strtok(str, delim);
    while (token) {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }

    return 0;
}
