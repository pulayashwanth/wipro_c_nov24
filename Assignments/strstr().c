// strstr()
// In C, the strstr function is used to find the first occurrence of a substring within another string. If the substring is found, strstr returns a pointer to the first character of the substring in the original string; otherwise, it returns a null pointer (NULL). The output is the pointer to the substring or NULL.

#include <stdio.h>

char *strstr(const char *haystack, const char *needle) {
    if (*needle == '\0') {
        return (char *)haystack; // Empty needle always matches
    }

    for (const char *h = haystack; *h != '\0'; h++) {
        const char *h_sub = h, *n = needle;
        while (*h_sub && *n && *h_sub == *n) {
            h_sub++;
            n++;
        }
        if (*n == '\0') {
            return (char *)h; // Found match
        }
    }

    return NULL; // No match
}

int main() {
    char haystack[100], needle[50];

    printf("Enter the main string: ");
    fgets(haystack, sizeof(haystack), stdin);
    printf("Enter the substring to find: ");
    fgets(needle, sizeof(needle), stdin);

    char *result = strstr(haystack, needle);
    if (result) {
        printf("Substring found at position: %ld\n", result - haystack);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
