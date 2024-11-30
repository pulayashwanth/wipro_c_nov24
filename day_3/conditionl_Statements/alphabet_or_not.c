// program to check alphabet or  not 

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch = '\0';
    printf("Enter a character to check if it is an alphabet: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        puts("Yes! its an alphabet");
    else
        puts("No! its not an alphabet");


    fflush(stdin);
    printf("Enter a character to check if it is an alphabet: ");
    scanf("%c", &ch);
    
    if (isalpha(ch))
        puts("Yes! its an alphabet");
    else
        puts("No! its not an alphabet");
}