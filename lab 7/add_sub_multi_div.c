#include <stdio.h>
int main() 
{
    double num1, num2, result;
    char operator;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }
    return 0;
}
