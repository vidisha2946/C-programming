#include <stdio.h>
void main() 
{
    int i,*ptrint;
    float f,*ptrfloat;
    char ch,*ptrch;
    double ds,*ptrd;
    printf("Value of character num: ");
    scanf("%c",&ch);
    printf("Value of int num: ");
    scanf("%d",&i);
    printf("Value of float num: ");
    scanf("%f",&f);
    printf("Value of num: ");
    scanf("%lf",&ds);
    ptrint      =  &i;
    ptrfloat    =  &f;
    ptrch       =  &ch;
    ptrd        =  &ds;
    printf("Value of num using int pointer: %d\n", *ptrint);
    printf("Value of num using float pointer: %f\n", *ptrfloat);
    printf("Value of num using charcter pointer: %c\n", *ptrch);
    printf("Value of num using double pointer: %lf\n", *ptrd);
}
