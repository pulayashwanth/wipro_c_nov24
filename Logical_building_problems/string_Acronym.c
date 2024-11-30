// Given a string, convert it into acronym. example : Portable network graphics --> PNG, As soon as possible ASAP

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toAcronym(const char *str, char *acronym) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 || (str[i - 1] == ' ' && str[i] != ' ')) {
            acronym[j++] = toupper(str[i]);
        }
    }
    acronym[j] = '\0';
}

int main() {
    char str[100], acronym[100];
    printf("Enter a phrase: ");
    fgets(str, sizeof(str), stdin);

    toAcronym(str, acronym);
    printf("Acronym: %s\n", acronym);

    return 0;
}

