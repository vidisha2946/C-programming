#include <stdio.h>

int main() {
    int dayNumber;
    printf("Enter a number (1-7) to get the day of the week: ");
    scanf("%d", &dayNumber);
    switch (dayNumber) {
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7");
            break;
    }

    return 0;
}
