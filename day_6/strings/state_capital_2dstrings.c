#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // Check if the user provided input
    if (argc < 2) {
        printf("Usage: %s \"state capital\" \"state capital\" ...\n", argv[0]);
        return 1;
    }

    int count = argc - 1; // Number of state-capital pairs

    // Dynamically allocate memory for state-capital strings
    char **stateCapital = (char **)malloc(count * sizeof(char *));
    if (stateCapital == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Allocate memory for each string and copy input
    for (int i = 0; i < count; i++) {
        stateCapital[i] = (char *)malloc(64 * sizeof(char));
        if (stateCapital[i] == NULL) {
            printf("Memory allocation failed for string %d.\n", i);
            return 1;
        }
        strncpy(stateCapital[i], argv[i + 1], 63);
        stateCapital[i][63] = '\0'; // Ensure null termination
    }

    // Print the states and capitals
    printf("State                Capital\n");
    printf("-----------------------------\n");
    for (int i = 0; i < count; i++) {
        char state[32], capital[32];
        sscanf(stateCapital[i], "%31s %31s", state, capital); // Split state and capital
        printf("%-20s %-20s\n", state, capital);
    }

    // Free allocated memory
    for (int i = 0; i < count; i++) {
        free(stateCapital[i]);
    }
    free(stateCapital);

    return 0;
}
