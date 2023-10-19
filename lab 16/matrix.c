#include<stdio.h>
void main()
{
    int data[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter array elements: ");
            scanf("%d",&data[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",data[i][j]);
        }
        printf("\n");
    }
}
