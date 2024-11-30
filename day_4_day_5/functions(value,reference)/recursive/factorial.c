#include <stdio.h>

// Function to find the factorial of a number using recursion
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n * factorial of (n-1)
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    
    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Call the factorial function and display the result
    printf("Factorial of %d is %d\n", num, factorial(num));
    
    return 0;
}
