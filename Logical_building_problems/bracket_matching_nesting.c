// 10.  Given a string containing brackets [], braces {}, parentheses (), or any combination thereof, verify that any and all pairs are matched and nested correctly. The string may also contain other characters, which for the purposes of this exercise should be ignored.


#include <stdio.h>
#include <string.h>

int isValidBrackets(const char *str) {
    char stack[100];
    int top = -1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            stack[++top] = str[i];
        } else if (str[i] == ')' || str[i] == '}' || str[i] == ']') {
            if (top == -1) return 0;

            char topChar = stack[top--];
            if ((str[i] == ')' && topChar != '(') ||
                (str[i] == '}' && topChar != '{') ||
                (str[i] == ']' && topChar != '[')) {
                return 0;
            }
        }
    }

    return top == -1;
}

int main() {
    char str[100];
    printf("Enter a string with brackets: ");
    fgets(str, sizeof(str), stdin);

    if (isValidBrackets(str)) {
        printf("The brackets are valid and properly nested.\n");
    } else {
        printf("The brackets are invalid or improperly nested.\n");
    }

    return 0;
}
