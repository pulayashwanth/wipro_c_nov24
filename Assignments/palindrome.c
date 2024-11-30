#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0, digit;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Store the original number for comparison
    originalNumber = number;

    // Reverse the number
    while (number != 0) {
        digit = number % 10;              // Extract the last digit
        reversedNumber = reversedNumber * 10 + digit; // Build the reversed number
        number /= 10;                     // Remove the last digit
    }

    // Check if the original number is equal to the reversed number
    if (originalNumber == reversedNumber) {
        printf("The number %d is a palindrome.\n", originalNumber);
    } else {
        printf("The number %d is not a palindrome.\n", originalNumber);
    }

    return 0;
}
