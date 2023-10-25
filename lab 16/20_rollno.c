#include <stdio.h>
void main()
{
    int rollno[20], marks[20];
    int i, j;
    for (i = 0; i <20; i++)
    {
        printf("Enter roll of student[%d]: ", i + 1);
        scanf("%d", &rollno[i]);
        printf("Enter marks of student[%d]: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (i = 0; i <20; i++)
    {
        printf("%3d\t%3d", rollno[i], marks[i]);
        printf("\n");
    }
    printf("\n");
}   
