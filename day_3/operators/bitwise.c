// &(and) , | ( bitwise or) , ^(xor means if bith are different means 1 or else 0 ), ! (not) ,  Right shift >>  , left shift <<


#include <stdio.h>

int main() {
    int a, b;

    // Prompt the user to enter two numbers
    puts("Enter two numbers separated by a comma: ");
    scanf("%d,%d", &a, &b);  // Corrected to pass addresses of variables `a` and `b`

    // Perform and print results of all bitwise operations
    printf("Bitwise AND (a & b): %d\n", a & b);
    printf("Bitwise OR (a | b): %d\n", a | b);
    printf("Bitwise XOR (a ^ b): %d\n", a ^ b);
    printf("Bitwise Complement of a (~a): %d\n", ~a);
    printf("Bitwise Complement of b (~b): %d\n", ~b);
    printf("Left shift a by 2 (a << 2): %d\n", a << 2);
    printf("Right shift a by 2 (a >> 2): %d\n", a >> 2);
    printf("Left shift b by 2 (b << 2): %d\n", b << 2);
    printf("Right shift b by 2 (b >> 2): %d\n", b >> 2);

    return 0;
}
