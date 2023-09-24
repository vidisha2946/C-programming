#include <stdio.h>

void main() {
    int x,y,c=1;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    for (int i = 0; i < y; i++) {
        c *= x;
    }
    printf("%d^%d = %d\n", x, y, c);
}
