#include<stdio.h>
int a,b;
int add(int a,int b);
void main()
{
    scanf("%d %d",&a,&b);
    int res=add(a,b);
    printf("%d",res);
}
int add(int a,int b)
{
    int c=a+b;
    return c;
}