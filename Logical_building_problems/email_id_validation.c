// 2. Checking if an email address is valid is a useful skill. The Problem Make sure an email address follows these rules:
// Has one @ symbol
// The part before @ doesn't start or end with . or -
// The part after @ ends in .com, .net, or .org
// If it does, say 'Valid'. If not, say 'Invalid'.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if an email address is valid
int isValidEmail(const char *email) {
    int atCount = 0, atIndex = -1, dotIndex = -1;
    int len = strlen(email);

    // Rule 1: Email should contain exactly one '@'
    for (int i = 0; i < len; i++) {
        if (email[i] == '@') {
            atCount++;
            atIndex = i;
        }
    }
    if (atCount != 1 || atIndex == 0 || atIndex == len - 1) {
        return 0;  // Invalid if no '@' or multiple '@' symbols
    }

    // Rule 2: Part before '@' shouldn't start or end with '.' or '-'
    if (email[0] == '.' || email[0] == '-' || email[atIndex - 1] == '.' || email[atIndex - 1] == '-') {
        return 0;  // Invalid if first or last character before '@' is '.' or '-'
    }

    // Rule 3: Part after '@' should end with '.com', '.net', or '.org'
    const char *validEndings[] = {".com", ".net", ".org"};
    const char *domainPart = email + atIndex + 1;

    for (int i = 0; i < 3; i++) {
        const char *ending = validEndings[i];
        int endingLen = strlen(ending);
        int domainLen = strlen(domainPart);

        if (domainLen >= endingLen && strcmp(domainPart + domainLen - endingLen, ending) == 0) {
            return 1;  // Valid if the domain ends with a valid suffix
        }
    }

    return 0;  // Invalid if none of the rules are satisfied
}

int main() {
    char email[100];

    // Input email address
    printf("Enter an email address to validate: ");
    scanf("%s", email);

    // Check if the email is valid
    if (isValidEmail(email)) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}
