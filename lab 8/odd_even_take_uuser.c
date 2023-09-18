#include <stdio.h>
void main() {
    int num, i=1,evencount = 0, oddcount = 0;
    while (i<=10) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num % 2 == 0) {
            evencount++;
        } else {
            oddcount++;
        }
        i++; 
    }
    printf("Count of even numbers: %d\n", evencount);
    printf("Count of odd numbers: %d\n", oddcount);
}

