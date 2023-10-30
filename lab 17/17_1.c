#include <stdio.h>
void main()
{
    int number = 29; 
    int *ptr = &number; 
    printf("Value of the variable: %d\n", *ptr);
    printf("Address of the variable: %d", ptr);
}
