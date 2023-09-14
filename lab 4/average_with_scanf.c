#include <stdio.h>

int main() {
    // Declare variables
    double radius, area;
    const double pi = 3.14159265359; // Approximate value of pi

    // Prompt the user for the radius of the circle
    printf("Enter the radius of the circle: ");

    // Use scanf to read the radius from the user
    scanf("%lf", &radius);

    // Calculate the area of the circle
    area = pi * radius * radius;

    // Print the result
    printf("The area of the circle with radius %.2lf is %.2lf\n", radius, area);

    return 0;
}


