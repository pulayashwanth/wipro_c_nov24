#include <stdio.h>

void printRightAngledTriangle(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void printPyramid(int N) {
    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int j = i; j < N; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

void printHollowSquare(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == 1 || i == N || j == 1 || j == N) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void printXShape(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || i + j == N - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void printXShapeInHollowSquare(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == 1 || i == N || j == 1 || j == N || i == j || i + j == N + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void printHollowRhombus(int N) {
    // Upper part of Rhombus
    for (int i = 1; i <= N; i++) {
        for (int j = i; j < N; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Lower part of Rhombus
    for (int i = N - 1; i >= 1; i--) {
        for (int j = i; j < N; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void printHexagon(int N) {
    // Upper part of Hexagon
    for (int i = 1; i <= N; i++) {
        for (int j = i; j < N; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of Hexagon
    for (int i = N - 1; i >= 1; i--) {
        for (int j = i; j < N; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int N, choice;

    printf("Enter the number of lines (N): ");
    scanf("%d", &N);

    printf("\nSelect the shape to print:\n");
    printf("1. Right-Angled Triangle\n");
    printf("2. Pyramid (Equilateral Triangle)\n");
    printf("3. Hollow Square\n");
    printf("4. X Shape\n");
    printf("5. X Shape Inside Hollow Square\n");
    printf("6. Hollow Rhombus\n");
    printf("7. Hexagon (Benzene Ring C6H6)\n");
    printf("Enter your choice (1-7): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printRightAngledTriangle(N);
            break;
        case 2:
            printPyramid(N);
            break;
        case 3:
            printHollowSquare(N);
            break;
        case 4:
            printXShape(N);
            break;
        case 5:
            printXShapeInHollowSquare(N);
            break;
        case 6:
            printHollowRhombus(N);
            break;
        case 7:
            printHexagon(N);
            break;
        default:
            printf("Invalid choice! Please select a number between 1 and 7.\n");
    }

    return 0;
}
