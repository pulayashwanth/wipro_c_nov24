
// 4. Write a program that accepts the age and date of birth of a person and checks for the premium amount needs to paid. do validation for age should not be greater than 72. the code should print the amount to be insured, and the premium amount to paid monthly.



#include <stdio.h>

int main() {
    int age;
    float insuredAmount, monthlyPremium;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 72) {
        printf("Sorry, age exceeds the limit for insurance.\n");
        return 1;
    }

    printf("Enter the amount to be insured: ");
    scanf("%f", &insuredAmount);

    // Example Premium Calculation (5% annual rate divided by 12 months)
    monthlyPremium = (insuredAmount * 0.05) / 12;

    printf("Insured Amount: %.2f\n", insuredAmount);
    printf("Monthly Premium: %.2f\n", monthlyPremium);

    return 0;
}
