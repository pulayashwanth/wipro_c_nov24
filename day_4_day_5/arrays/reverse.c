#include <stdio.h>
#include <stdlib.h> // for memory allocation

// Function to reverse the array
void reverse(float array[], int length) {
    float temp;
    for (int i = 0; i < length / 2; i++) {
        temp = array[i];
        array[i] = array[length - 1 - i];
        array[length - 1 - i] = temp;
    }
}

// Function to print the array
void print_array(float array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");
}

int main() {
    float* array;
    int number;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &number);

    // Allocate memory for the array
    array = (float*)calloc(number, sizeof(float));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        exit(0);
    }

    // Input elements into the array
    for (int i = 0; i < number; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%f", &array[i]);
    }

    // Print the original array
    printf("\nOriginal array: ");
    print_array(array, number);

    // Reverse the array
    reverse(array, number);

    // Print the reversed array
    printf("\nReversed array: ");
    print_array(array, number);

    // Free allocated memory
    free(array);

    return 0;
}
