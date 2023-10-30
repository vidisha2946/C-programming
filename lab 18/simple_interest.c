#include <stdio.h>
float calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}
void main() 
{
    float principal, rate, time, interest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    interest = calculateSimpleInterest(principal, rate, time);
    printf("Simple Interest: %.2f\n", interest);
}
