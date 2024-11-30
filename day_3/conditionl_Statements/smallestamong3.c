// smallest among 3 

#include <stdio.h>

int main() {
    int a, b, c;

    // Input three distinct numbers
    printf("Enter three distinct numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Compare to find the smallest
    if (a < b && a < c) {
        printf("The smallest number is: %d\n", a);
    } else if (b < a && b < c) {
        printf("The smallest number is: %d\n", b);
    } else {
        printf("The smallest number is: %d\n", c);
    }

    return 0;
}
