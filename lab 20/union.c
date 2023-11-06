#include <stdio.h>
union Number 
{
    int i;
    float f;
};
void main() 
{
    union Number num; 
    num.i = 42;      
    printf("Number as int: %d\n", num.i);
    num.f = 3.14;    
    printf("Number as float: %f\n", num.f);
}
