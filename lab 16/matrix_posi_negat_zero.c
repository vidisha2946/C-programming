#include<stdio.h>
void main()
{
    int data[3][3],i,j,p=0,n=0,z=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter  elements: ");
            scanf("%d",&data[i][j]);
            if(data[i][j]>0)
            {
                p++;
            }
            else if(data[i][j]<0)
            {
                n++;
            }
            else
            {
                z++;
            }
        }
    }
    printf("positive=%d,negative=%d,zero=%d",p,n,z);
}