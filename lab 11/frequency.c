#include<stdio.h>
void main()
{
    int n=0,digit,i=0;
    printf("enter a number: ");
    scanf("%d",&n);
    int arr[10]={0};
    while(n!=0){
        digit=n%10;
        arr[digit]++;
        n=n/10;
    }
    for(i=0;i<10;i++)
    {
            printf("%d %d\n",i,arr[i]);
    }
}