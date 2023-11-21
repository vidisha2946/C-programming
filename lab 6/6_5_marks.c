#include <stdio.h>
void main() 
{
    int marks[5] = {75, 60, 50, 40, 85};
    int total = 0;
    for (int i = 0; i < 5; i++) 
    {
        total += marks[i];
    }
    float percentage = (float)total / 5;
    printf("Percentage: %.2f%%\n", percentage);
    if (percentage < 35) 
    {
        printf("Fail\n");
    } 
    else if (percentage >= 35 && percentage <= 45)
        {
            printf("Second Class\n");
        } 
    else if (percentage > 45 && percentage <= 60) 
    {
        printf("Pass Class\n");
    } 
    else if (percentage > 60 && percentage <= 70) 
    {
        printf("First Class\n");
    } 
    else 
    {
        printf("Distinction\n");
    }
}
