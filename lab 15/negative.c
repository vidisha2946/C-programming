#include<stdio.h>
void main()
{
    int arr[5],i,cn=0;
    for(i=0;i<5;i++)
    {
        printf("enter num[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]<0)
        cn++;
    }
    printf("negative: %d",cn);
}