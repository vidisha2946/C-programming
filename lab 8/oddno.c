#include <stdio.h>
void main() {
    int num = 1; 
    printf("Odd numbers between 1 and 10: ");
    while (num <= 10) {
        if (num % 2 != 0) { // Check if num is odd
            printf("%d ", num);
        }
        num++;
    }
    printf("\n");
}

