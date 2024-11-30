#include <stdio.h>
#include <stdlib.h> 


void reverse(float array[], int length) {
    float temp;
    int i = 0;
    while (i < length / 2) {
        temp = array[i];
        array[i] = array[length - 1 - i];
        array[length - 1 - i] = temp;
        i++;
    }
}


void print_array(float array[], int length) {
    int i = 0;
    while (i < length) {
        printf("%.2f ", array[i]);
        i++;
    }
    printf("\n");
}

int main() {
    float* array;
    int number;


    printf("Enter the number of elements: ");
    scanf("%d", &number);


    array = (float*)calloc(number, sizeof(float));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        exit(0);
    }


    int i = 0;
    while (i < number) {
        printf("Enter element %d: ", i + 1);
        scanf("%f", &array[i]);
        i++;
    }

   
    printf("\nOriginal array: ");
    print_array(array, number);

 
    reverse(array, number);


    printf("\nReversed array: ");
    print_array(array, number);


    free(array);

    return 0;
}
