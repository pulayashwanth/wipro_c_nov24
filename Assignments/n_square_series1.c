#include <stdio.h>
#include <math.h>

int main() {
    int n, m, sum = 0;

    // Input the values of n and m
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the number of terms (m): ");
    scanf("%d", &m);

    // Calculate the sum of the series 1 - n + n^2 - n^3 + ... for m terms
    for (int i = 0; i < m; i++) {
        // For even indices (0, 2, 4, ...) add n^i
        // For odd indices (1, 3, 5, ...) subtract n^i
        if (i % 2 == 0) {
            sum += pow(n, i);  // Add n^i if the index is even
        } else {
            sum -= pow(n, i);  // Subtract n^i if the index is odd
        }
    }

    // Output the result
    printf("The sum of the series is: %d\n", sum);

    return 0;
}
