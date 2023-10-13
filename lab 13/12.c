#include <stdio.h>
void main() 
{
    int n = 5,i,j,k;
    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j < i; j++) 
        {
            printf(" ");
        }
        for (k = i; k <= n; k++) 
        {
            printf("*");
            if (k < n) {
                printf(" ");
            }
        }
        printf("\n");
    }
}
