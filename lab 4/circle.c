#include <stdio.h>
void main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float area = 3.14159265359 * radius * radius;
    printf("%f,%f\n", radius, area);
}

