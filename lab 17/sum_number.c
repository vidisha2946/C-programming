#include <stdio.h>
void main() 
{
    int num1, num2;
    int *ptr1, *ptr2;
    int sum;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    ptr1 = &num1;
    ptr2 = &num2; 
    sum  = *ptr1 + *ptr2;
    printf("Sum of this number: %d\n", sum);
}
