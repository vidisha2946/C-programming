#include <stdio.h>
void main() {
    int start, end;
    printf("Enter the start number: ");
    scanf("%d", &start);
    printf("Enter the end number: ");
    scanf("%d", &end);
    if (start % 2 != 0) {
        start++; 
    }
    printf("devisible by 2 numbers between %d and %d are:\n", start, end);
    while (start <= end) {
        printf("%d ", start);
        start += 2; 
    }
    printf("\n");
}
