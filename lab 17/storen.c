#include<stdio.h>
void main()
{
    int n,*ptrn;
    printf("enter a value of n: ");
    scanf("%d",&n);
    ptrn = &n;
    printf("Value of the variable: %d\n", *ptrn);
}