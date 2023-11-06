#include <stdio.h>
#include <string.h>
void replaceCharacter(char *str, char target, char replacement) 
{
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == target) 
        {
            str[i] = replacement;
        }
    }
}
void main() 
{
    char inputString[100];
    char target, replacement;
    printf("Enter a string: ");
    gets(inputString);  
    printf("Enter the character to replace: ");
    scanf(" %c", &target);  
    printf("Enter the replacement character: ");
    scanf(" %c", &replacement); 
    replaceCharacter(inputString, target, replacement);
    printf("Modified string: %s\n", inputString);
}
