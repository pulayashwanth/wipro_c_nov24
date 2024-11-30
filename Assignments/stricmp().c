// string compare compares the two lists 

#include <stdio.h>
#include <ctype.h>

int stricmp(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (tolower(*str1) != tolower(*str2)) {
            return tolower(*str1) - tolower(*str2);
        }
        str1++;
        str2++;
    }
    return tolower(*str1) - tolower(*str2);
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    if (stricmp(str1, str2) == 0) {
        printf("Strings are equal (case insensitive).\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
