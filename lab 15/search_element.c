#include<stdio.h>
void main()
{
   int n,flag=0,index;
        printf("enter an array of size: ");
        scanf("%d",&n);
        int a[100],i,search;
        for(i=0;i<n;i++)
            {
                printf("enter an array: ");
                scanf("%d",&a[i]);
            }
            printf("search a number: ");
            scanf("%d",&search);
        for(i=0;i<n;i++)
        {
            if(a[i]==search)
            {
                flag=1;
                index=i;
                
            } 
        } 
        if(flag)
            {
                printf("element found at index: %d",index);
            }
            else
            {
                printf("element not found");
            }  
}
