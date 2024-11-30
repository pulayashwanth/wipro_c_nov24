// string copy 

#include <stdio.h>

void strncpy(char *dest, const char *src, int n) {
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }
}

int main() {
    char src[100], dest[100];
    int n;

    printf("Enter source string: ");
    fgets(src, sizeof(src), stdin);
    printf("Enter number of characters to copy: ");
    scanf("%d", &n);

    strncpy(dest, src, n);
    printf("Copied String: '%s'\n", dest);

    return 0;
}
