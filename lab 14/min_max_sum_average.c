#include<stdio.h>
void main()
{
    int n,i;
    printf("enter value of n: ");
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("enter array[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    int min=0,max=0,sum=0;
    float average;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min) 
        {
            min = arr[i];
        }
        sum=sum+arr[i];
    }
    average = sum/n;
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);
    printf("Sum of numbers: %d\n", sum);
    printf("Average of numbers: %f\n",average);
}