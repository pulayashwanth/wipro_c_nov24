// Find the biggest and smallest digits in a number

#include <stdio.h>
#include <stdlib.h>



int main(int argCount, char *args[]) {
    int input_number = atoi(args[1]);
    printf("User given number is %d \n", input_number);
    int small_digit = 9, big_digit = 0, remainder_digit = 0;
    while (input_number != 0)
    {
        remainder_digit = input_number % 10;
        if (small_digit > remainder_digit)
            small_digit = remainder_digit;
        if (big_digit < remainder_digit)
            big_digit = remainder_digit;
        input_number = input_number / 10;
    }
    printf("Smallest digit = %d, Biggest Digit = %d", small_digit, big_digit);
}