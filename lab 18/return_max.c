#include <stdio.h>
float maxOfThree(float num1, float num2, float num3)
 {
    if (num1 >= num2 && num1 >= num3) 
    {
        return num1;
    } 
    else if (num2 >= num1 && num2 >= num3) 
    {
        return num2;
    } 
    else 
    {
        return num3;
    }
}

void main() 
{
    float num1, num2, num3;
    printf("Enter three floating-point numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    float maximum = maxOfThree(num1, num2, num3);
    printf("The maximum of the three numbers is %.2f\n", maximum);
}
