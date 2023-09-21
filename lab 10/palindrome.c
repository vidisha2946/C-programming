#include <stdio.h>
void  main() {
    int number, originalNumber, reversedNumber = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    originalNumber = number; 
    while (number != 0) {
        int digit = number % 10; 
        reversedNumber = reversedNumber * 10 + digit; 
        number /= 10; 
    }
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }
}