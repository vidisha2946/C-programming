#include <stdio.h>
void main()
{
    int i, j, k = 1, sp, n;
    char ch = 'A';
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (sp = 1; sp <= n - i; sp++)
        {
            printf(" ");
        }
    for (j = 1; j <= i; j++)
    {
        if (i % 2 != 0)
        printf("%d ", k++);
        else
        printf("%c ", ch++);
    }
        printf("\n");
    }
}