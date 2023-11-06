#include <stdio.h>
#include <string.h>

// Function to find a character in a string
int findCharacter(const char *str, char target)
 {
    int len = strlen(str);
    for (int i = 0; i < len; i++) 
    {
        if (str[i] == target) 
        {
            return i;  
        }
    }
}

void main() 
{
    char inputString[100];
    char targetChar;
    printf("Enter a string: ");
    scanf("%s", inputString);
    printf("Enter the character to find: ");
    scanf(" %c", &targetChar);
    int index = findCharacter(inputString, targetChar);
    if (index != -1) 
    {
        printf("Character '%c' found at index %d in the string.\n", targetChar, index);
    } 
    else 
    {
        printf("Character '%c' not found in the string.\n", targetChar);
    }
}
