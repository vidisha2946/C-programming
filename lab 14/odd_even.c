#include <stdio.h>
void main() 
{
    int i,n,ec=0,oc=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i=0; i<n; i++)
        {
            printf("enter num[%d]: ",i);
            scanf("%d", &arr[i]);
        }
    for (int i = 0; i < n; i++) 
        {
            if (arr[i] % 2 == 0) 
            {
                ec++;
            } else 
                {
                oc++;
            }
        }
    printf("Number of even numbers: %d\n",ec);
    printf("Number of odd numbers: %d\n",oc);
}
