 // Calculate the sum of the series n + n^2 + n^3 + ... + n^10

#include <stdio.h>
#include <math.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter a number (n): ");
    scanf("%d", &n);

    // Calculate the sum of the series n + n^2 + n^3 + ... + n^10
    for (int i = 1; i <= 10; i++) {
        sum += pow(n, i);  // Add n raised to the power of i to the sum
    }

    // Output the result
    printf("The sum of the series is: %d\n", sum);

    return 0;
}
