#include <stdio.h>

int main() {
    int a, b, c, smallest;

    // Input three distinct numbers
    printf("Enter three distinct numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find the smallest using the ternary operator
    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("The smallest number is: %d\n", smallest);

    return 0;
}
