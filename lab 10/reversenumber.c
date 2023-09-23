#include <stdio.h>
void main()
 {
    int n, a = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Number in reverse order: ");
    while (n!= 0) {
        int digit = n % 10;
        printf("%d", digit);
        n/= 10;
        a = a * 10 + digit;
    }
    printf("\n");
}