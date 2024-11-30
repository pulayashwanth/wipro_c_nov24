// Declare 3 character variables and accept values, raining=r sunny=s cloudy=c
// Allow the person to go out only if it is:
// 	1. only sunny
// 	2. sunny and raining


#include <stdio.h>

int main() {
    char weather1, weather2, weather3;

    // Accept values for the three weather conditions
    printf("Enter weather conditions (r for raining, s for sunny, c for cloudy):\n");
    printf("Condition 1: ");
    scanf(" %c", &weather1);
    printf("Condition 2: ");
    scanf(" %c", &weather2);
    printf("Condition 3: ");
    scanf(" %c", &weather3);

    // Check the conditions to decide if the person can go out
    if ((weather1 == 's' && weather2 != 'r' && weather3 != 'r') || // Only sunny
        (weather1 == 's' && (weather2 == 'r' || weather3 == 'r'))) { // Sunny and raining
        printf("You can go out!\n");
    } else {
        printf("You cannot go out.\n");
    }

    return 0;
}
