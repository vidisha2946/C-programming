#include <stdio.h>
#include <string.h>
void reverseString(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
void main() 
{
    char str1[50], str2[50], combinedStr[100];
    printf("Enter a string: ");
    scanf("%s", str1);

    // Calculate the length of the string
    int length = strlen(str1);
    printf("Length of the string is %d\n", length);

    // Compare two strings
    printf("Enter another string: ");
    scanf("%s", str2);

    int compareResult = strcmp(str1, str2);
    if (compareResult == 0)
        printf("Both strings are equal.\n");
    else if (compareResult < 0)
        printf("The first string is lexicographically smaller.\n");
    else
        printf("The second string is lexicographically smaller.\n");

    // Copy one string to another
    strcpy(combinedStr, str1);
    strcat(combinedStr, str2);
    printf("Concatenated string: %s\n", combinedStr);

    // Reverse a string
    char revStr[50];
    strcpy(revStr, str1);
    reverseString(revStr);
    printf("Reversed string: %s\n", revStr);
    // Convert a string to lowercase
    char lowerStr[50];
    strcpy(lowerStr, str1);
    for (int i = 0; lowerStr[i]; i++) {
        if (lowerStr[i] >= 'A' && lowerStr[i] <= 'Z') {
            lowerStr[i] = lowerStr[i] + 32; // ASCII conversion for lowercase
        }
    }
    printf("Lowercase string: %s\n", lowerStr);
    // Convert a string to uppercase
    char upperStr[50];
    strcpy(upperStr, str1);
    for (int i = 0; upperStr[i]; i++) {
        if (upperStr[i] >= 'a' && upperStr[i] <= 'z') {
            upperStr[i] = upperStr[i] - 32; // ASCII conversion for uppercase
        }
    }
    printf("Uppercase string: %s\n", upperStr);
}
