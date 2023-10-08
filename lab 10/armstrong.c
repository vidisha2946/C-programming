#include <stdio.h>
#include <math.h>
void main() {
    int number, originalNumber, remainder, n = 0, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;
    while (originalNumber != 0) {
        originalNumber /= 10;
        n++;
    }
    originalNumber = number; 
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        sum += pow(remainder, n);
        originalNumber /= 10;
    }
    if (sum == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);
}
