//  Convert a binary number represented as string "10010101" to its decimal equivalent


#include <stdio.h>
#include <string.h>

int binaryToDecimal(const char *binary) {
    int decimal = 0;
    for (int i = 0; binary[i] != '\0'; i++) {
        decimal = decimal * 2 + (binary[i] - '0');
    }
    return decimal;
}

int main() {
    char binary[100];
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int decimal = binaryToDecimal(binary);
    printf("Decimal Equivalent: %d\n", decimal);

    return 0;
}
