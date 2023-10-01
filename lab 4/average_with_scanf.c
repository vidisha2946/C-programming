#include <stdio.h>
void main()
 {
    double radius, area;
    const double pi = 3.14159265359;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    area = pi * radius * radius;
    printf("The area of the circle with radius %.2lf is %.2lf\n", radius, area);
}

