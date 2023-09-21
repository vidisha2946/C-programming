#include <stdio.h>
void main()
{
    int num,rem=0,sum=0;
    printf("enter the number :");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    while(sum!=0)
    {
        rem=sum%10;
        switch(rem)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        default:
            printf("please enter valid number ");
            exit(0);
        }
        sum=sum/10;
    }
}