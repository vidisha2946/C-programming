#include <stdio.h>
void main() 
{
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n],count=0;
    printf("Enter %d elements into the array:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) 
    {
        if (arr[i] % 3 == 0) 
        {
            count++;
        }
    printf("Number of elements divisible by 3 in the array: %d\n", count);
}
}
