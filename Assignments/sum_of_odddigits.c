#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Process each digit
    while (number != 0) {
        digit = number % 10; // Extract the last digit
        if (digit % 2 != 0) { // Check if the digit is odd
            sum += digit; // Add odd digit to the sum
        }
        number /= 10; // Remove the last digit
    }

    // Output the sum of odd digits
    printf("The sum of odd digits is: %d\n", sum);

    return 0;
}
