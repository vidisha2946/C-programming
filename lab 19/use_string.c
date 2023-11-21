#include <stdio.h>
#include <string.h>
void main() 
{
    char str1[100] = "Hello";
    char str2[100] = "World";
    printf("Length of str1: %lu\n", strlen(str1));
    int compare = strcmp(str1, str2);
    if (compare == 0) 
    {
        printf("str1 and str2 are equal\n");
    } 
    else if (compare < 0) 
    {
        printf("str1 is less than str2\n");
    } 
    else 
    {
        printf("str1 is greater than str2\n");
    }
    char copy[100];
    strcpy(copy, str1);
    printf("Copied string: %s\n", copy);
    strcat(str1, " ");
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    char reverse[100];
    strcpy(reverse, str2);
    strrev(reverse);
    printf("Reversed string: %s\n", reverse);
    char lowercase[100];
    strcpy(lowercase, str1);
    printf("Lowercase string: %s\n", strlwr(lowercase));
    char uppercase[100];
    strcpy(uppercase, str1);
    printf("Uppercase string: %s\n", strupr(uppercase));
}
