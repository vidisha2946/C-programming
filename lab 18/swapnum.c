#include <stdio.h>
void swapNumbers(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main() 
{
    int num1, num2;
    printf("first number: ");
    scanf("%d", &num1);
    printf("second number: ");
    scanf("%d", &num2);
    printf("Original numbers: num1 = %d, num2 = %d\n", num1, num2);
    swapNumbers(&num1, &num2);
    printf("Swapped numbers: num1 = %d, num2 = %d\n", num1, num2);
}
