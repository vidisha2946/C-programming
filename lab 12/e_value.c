#include <stdio.h>
void main() 
{
    int n;
    double e = 1.0; 
    printf("Enter the number of terms to estimate e: ");
    scanf("%d", &n);
    double term = 1.0;
    for (int i = 1; i <= n; i++) 
    {
        term /= i; 
        e += term; 
    }
    printf("Estimated value of e with %d terms: %lf\n", n, e);
}
