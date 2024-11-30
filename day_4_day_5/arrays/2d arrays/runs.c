#include <stdio.h>

// Function to calculate the sum of runs scored by all players
int findSumOfRuns(int ptr[11][2], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += ptr[i][1];  // Add the runs scored by each player (second column)
    }
    return sum;
}

// Function to read the details of the players (Jersey Number and Runs)
void readDetailsOfPlayers(int ptr[11][2]) {
    puts("Enter Jersey Number and the runs scored by the 11 players:");
    for (int i = 0; i < 11; i++) {
        printf("Enter Jersey Number of player-%d: ", i + 1);
        scanf("%d", &ptr[i][0]);  // Store the Jersey number in column 0
        printf("Enter runs scored by player-%d: ", i + 1);
        scanf("%d", &ptr[i][1]);  // Store the runs in column 1
    }
}

// Function to print the details of the players
void printDetailsOfPlayers(int players[11][2], int rows) {
    printf("\n----------------------------\n");
    printf("Jersey Number    RUNS SCORED\n");
    printf("----------------------------\n");
    
    for (int i = 0; i < rows; i++) {
        printf("%-17d%-11d\n", players[i][0], players[i][1]);
    }
}

int main() {
    int playerDetails[11][2] = {{0}}; // 11 rows and 2 columns, initialized to 0
    readDetailsOfPlayers(playerDetails);  // Read player details
    printDetailsOfPlayers(playerDetails, 11);  // Print player details
    
    // Calculate the sum of runs
    int totalRuns = findSumOfRuns(playerDetails, 11);
    printf("\nTotal runs scored by all players: %d\n", totalRuns);  // Print total runs

    return 0;
}
