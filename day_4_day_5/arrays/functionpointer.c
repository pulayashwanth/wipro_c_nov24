#include <stdio.h>

// Function prototypes
double findSum(double, double);
double findProduct(double, double);
double findSquare(double);

// Function definitions
double findSum(double num1, double num2)
{
    return num1 + num2;
}

double findProduct(double num1, double num2)
{
    return num1 * num2;
}

double findSquare(double num)
{
    return num * num;
}

int main()
{
    // Function pointer for two arguments
    double (*fptr2)(double, double);
    
    // Assigning function pointer to findSum and calling it
    fptr2 = findSum; // fptr2 points to findSum  // function name will give the address of the function.
    double sum = fptr2(25, 35.05);
    printf("Sum = %lf \n", sum);
    
    // Assigning function pointer to findProduct and calling it
    fptr2 = findProduct;
    printf("Product = %.2lf\n", fptr2(2.5, 4.5));
    
    // Function pointer for one argument
    double (*fptr1)(double);
    
    // Assigning function pointer to findSquare and calling it
    fptr1 = findSquare;
    printf("Square = %.2lf\n", fptr1(5.5));

    return 0;
}
