// strip c with out library function 

// The strip() function removes leading and trailing spaces or tabs from a string


#include <stdio.h>

void strip(char *str) {
    int start = 0, end = 0;

    // Find the first non-space/tab character
    while (str[start] == ' ' || str[start] == '\t') {
        start++;
    }

    // Find the last non-space/tab character
    end = start;
    while (str[end] != '\0') {
        end++;
    }
    end--; // Go to the last character
    while ((str[end] == ' ' || str[end] == '\t') && end >= start) {
        end--;
    }

    // Shift the trimmed part to the beginning of the string
    int i = 0;
    for (i = 0; start <= end; start++, i++) {
        str[i] = str[start];
    }
    str[i] = '\0'; // Null-terminate the trimmed string
}

int main() {
    char str[100];
    printf("Enter a string with leading and trailing spaces/tabs: ");
    fgets(str, sizeof(str), stdin);

    strip(str);
    printf("Trimmed String: '%s'\n", str);

    return 0;
}
