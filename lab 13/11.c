#include<stdio.h>
 void main() {
    int i, j;
    for (i = 0; i < 5; i++) {
       
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        
        for (j = 0;j < 2*(5-i)-1; j++) {
            printf("*");
        }
        printf("\n");
    }
}
