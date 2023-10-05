#include <stdio.h>
void main() 
{
    int n, i, j, sum = 0;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        int innerSum = 0;
        for (j = 1; j <= i; j++) {
            innerSum = innerSum + j; 
        }
        sum = sum + innerSum;

    }
    printf("Sum of the series is: %d\n", sum);
}
