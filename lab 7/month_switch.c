#include<stdio.h>
int main()
{
    int month;
    printf("enter the value of month (1-12): ");
    scanf("%d",&month);
    switch(month){
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
        printf("The Month has 31 days");
        break;
        case 4:case 6:case 9:case 11:
        printf("The Month has 30 days");
        break;
        case 2:
        printf("The Month has either 28 or 29 days (depands on leap year)");
        break;
        default:
        printf("Invalid month enter the value of (1-12)");
        

    }
}