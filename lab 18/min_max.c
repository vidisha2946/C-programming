#include<stdio.h>
//int MaxMin(int a,int b);
int MaxMin(int a, int b)
{
     if(a>b)
    {
        return a;
    }
    else 
    {
        return b;
    }
}
void main()
{
    int a,b;
    printf("enter value of a: ");
    scanf("%d",&a);
    printf("enter value of b: ");
    scanf("%d",&b);
    int res = MaxMin(a,b);
    printf("%d",res);
}
