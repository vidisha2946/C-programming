#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int term = i * i;
        sum += term;
    }
    printf("Sum of the series up to %d terms is: %d\n", n, sum);
}
