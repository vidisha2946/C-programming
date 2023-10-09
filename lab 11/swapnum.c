#include <stdio.h>
void main() 
{
    int num, temp, reversedNum = 0, lastDigit, originalNum;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num; 
    lastDigit = num % 10;
    num = num / 10;
    while (num > 0) {
        temp = num % 10;
        reversedNum = reversedNum * 10 + temp;
        num = num / 10;
    }
    num = (lastDigit * 1) + (reversedNum * 10);
    printf("Original number: %d\n", originalNum);
    printf("Number after swapping first and last digits: %d\n", num);
}
