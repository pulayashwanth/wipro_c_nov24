#include <stdio.h>
#include <math.h>

int main() {
    int n, m;
    double sum = 0.0;  // To store the sum of the series

    // Input the values of n and m
    printf("Enter the value of n (1 <= n <= 3): ");
    scanf("%d", &n);
    printf("Enter the number of terms (1 <= m <= 10): ");
    scanf("%d", &m);

    // Validate inputs
    if (n < 1 || n > 3 || m < 1 || m > 10) {
        printf("Invalid input. Please ensure 1 <= n <= 3 and 1 <= m <= 10.\n");
        return 1;
    }

    // Calculate the sum of the series
    int power = 1;  // Start with n^1
    int denominator = 1;  // Start with denominator 1
    for (int i = 1; i <= m; i++) {
        if (i % 2 != 0) { // Odd terms (positive)
            sum += pow(n, power) / denominator;
        } else { // Even terms (negative)
            sum -= pow(n, power) / denominator;
        }
        
        // Update the power (n^2, n^4, n^8, ...)
        power *= 2;
        
        // Update the denominator (1, 3, 5, 7, ...)
        denominator += 2;
    }

    // Output the result
    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}
