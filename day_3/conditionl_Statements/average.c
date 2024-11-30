// Accept average score from the user and print the result as follows:
// 0  - 50 Fail
// 50 - 80 Second Class
// 81 - 95 First class
// 96 -100 Distinction
// Also check for invalid score

#include <stdio.h>
#include <math.h>

int main()
{
    int averagScore = 0;
    printf("Enter your average score to print result: ");
    scanf("%d", &averagScore);
    if (averagScore >= 0 && averagScore <= 50)
        puts("Your result is Fail");
    else if (averagScore <= 80)
        puts("Your result is Second class");
    else if (averagScore <= 95)
        puts("Your result is First class");
    else if (averagScore <= 100)
        puts("Your result is Distinction");
    else
        puts("Invalid score entered");
}
