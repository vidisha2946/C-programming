#include <stdio.h>
void swapByValue(int a, int b) 
{
    int temp = a;
    a = b;
    b = temp;
}
void main() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num2, num1);
    printf("After swap: num1 = %d, num2 = %d\n", num2, num1);
}
