// 5. Given a string S consisting of only lowercase and uppercase English letters and spaces, your task is to convert it into title case. In title case, the first letter of each word is capitalized while the rest are in lowercase, except for words that are entirely in uppercase (considered as acronyms), which should remain unchanged.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toTitleCase(char *str) {
    int inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            inWord = 0;
        } else if (!inWord) {
            str[i] = toupper(str[i]);
            inWord = 1;
        } else {
            str[i] = tolower(str[i]);
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toTitleCase(str);
    printf("Title Case: %s", str);

    return 0;
}
