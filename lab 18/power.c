#include<stdio.h>
int a,b;
int pow1(int a,int b);
void main()
{
    int base,exp;
    scanf("%d %d",&base,&exp);
    int res = pow1(base,exp);
    printf("%d",res);
}
int pow1(int a,int b)
{
    int i=1,res=1;
    for(i=1;i<=b;i++)
    {
        res=res*a;
    }
    return res;
}
