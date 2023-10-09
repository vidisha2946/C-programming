#include<stdio.h>
void main()
{
    int n,i,cp=0,cn=0;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter num[%d]: ",i);
        scanf("%d",&arr[i]);
    }
       if(arr[0]>0)
            {
                 cp++;
            }
                else
            {
                cn++;
            }
            for (i=0;i<n;i++)
            {
                if(arr[i]>=0)
                {
                    cp++;
                }
                else
                {
                    cn++;
                }
            }
     printf("positive %d negative %d",cp,cn);
}