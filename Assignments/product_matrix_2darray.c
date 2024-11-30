#include <stdio.h>

#define MAX 10  // Maximum size of the matrix

// Function to multiply two matrices
void multiplyMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;  // Initialize the result element
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];  // Multiply and add
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int mat[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
    int m, n, p;

    // Input dimensions for first matrix (m x n)
    printf("Enter number of rows and columns for first matrix: ");
    scanf("%d %d", &m, &n);

    // Input dimensions for second matrix (n x p)
    printf("Enter number of rows and columns for second matrix: ");
    scanf("%d %d", &n, &p);

    // Input elements for the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Multiply the matrices
    multiplyMatrices(mat1, mat2, result, m, n, p);

    // Output the result
    printf("The product of the matrices is:\n");
    printMatrix(result, m, p);

    return 0;
}
