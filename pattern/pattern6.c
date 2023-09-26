#include <stdio.h>
void main()
{
	int n = 5,k=0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * (n - i) - 1; j++) {
			printf(" ");
		}
		for ( k = 0; k < 2 * i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
}
