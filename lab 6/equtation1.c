#include <stdio.h>
int main() {
    float a, b, c, discriminant, root1, root2;
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %f\n", root1);
        printf("Root 2 = %f\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Root 1 = Root 2 = %f\n", root1);
    } else {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1 = %f + %f\n", realPart, imaginaryPart);
        printf("Root 2 = %f - %f\n", realPart, imaginaryPart);
    }
    return 0;
}

