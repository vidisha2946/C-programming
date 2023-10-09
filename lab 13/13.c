#include <stdio.h>
void main()
{
    int i,j,n=5,a=1;
    char ch='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
            if(j%2==1)
            {
                if(i%2==1)
                {
                    printf("%d",a);
                    a++;
                }
                else
                {
                    printf("%c",ch);
                    ch++;
                }
            }
            else
            {
                printf(" ");
            }
            printf("\n");
    }
}
