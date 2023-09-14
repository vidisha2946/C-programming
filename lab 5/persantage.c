#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    float percentage;

    printf("Enter marks for five subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    int totalMarks = m1 + m2 + m3 + m4 + m5;
    percentage = (float)totalMarks / 5;
    printf("Percentage: %.2f\n", percentage);
    if (percentage < 35) {
        printf("Class: Fail\n");
    } else if (percentage >= 35 && percentage <= 45) {
        printf("Class: Pass Class\n");
    } else if (percentage > 45 && percentage <= 60) {
        printf("Class: Second Class\n");
    } else if (percentage > 60 && percentage <= 70) {
        printf("Class: First Class\n");
    } else {
        printf("Class: Distinction\n");
    }

    return 0;
}

