#include <stdio.h>
void main() {
    int num,factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %d\n", num, factorial);
    }

