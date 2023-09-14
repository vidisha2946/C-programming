#include <stdio.h>
int main() {
    float principal, roi, time;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &roi);
    printf("Enter the time period (in years): ");
    scanf("%f", &time);
    float simpleInterest = (principal * roi * time) / 100;
    printf("%f\n", simpleInterest);
    return 0;
}

