#include <stdio.h>
struct Point 
{
    int x;
    int y;
};
void main() 
{
    struct Point p1; 
    
    p1.x = 3;      
    p1.y = 5;      
    printf("Point p1: (%d, %d)\n", p1.x, p1.y);
}
