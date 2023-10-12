#include <stdio.h>
#include <math.h>

int main() {
    int i,n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    float arr[n];
    for (int i = 0; i < n; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%f", &arr[i]);
    }
    float sum = 0.0;
    float  product = 1.0;
    float reciprocal_sum = 0.0;
    for (i = 0; i < n; i++) 
    {
        sum += arr[i];
        product *= arr[i];
        reciprocal_sum += 1.0 / arr[i];
    }
    float average = sum / n;
    float geometric_mean = pow(product,1.0/n);
    float harmonic_mean = n / reciprocal_sum;

    printf("Average: %f\n", average);
    printf("Geometric Mean: %f\n", geometric_mean);
    printf("Harmonic Mean: %f\n", harmonic_mean);
}
