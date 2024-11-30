// 9. Determine if a word or phrase is an isogram: An isogram (also known as a "non-pattern word") is a word or phrase without a repeating letter, however spaces and hyphens are allowed to ppear multiple times. Examples of isograms: lumberjacks, background, downstream, six-year-old

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isIsogram(const char *str) {
    int seen[26] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            int index = tolower(str[i]) - 'a';
            if (seen[index]) {
                return 0;  // Not an isogram
            }
            seen[index] = 1;
        }
    }
    return 1;  // Is an isogram
}

int main() {
    char str[100];
    printf("Enter a word or phrase: ");
    fgets(str, sizeof(str), stdin);

    if (isIsogram(str)) {
        printf("It is an isogram.\n");
    } else {
        printf("It is not an isogram.\n");
    }

    return 0;
}
