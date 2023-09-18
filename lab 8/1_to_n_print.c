#include <stdio.h>
void main() {
    int n, i = 1, sum = 0;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("%d",sum);
}

