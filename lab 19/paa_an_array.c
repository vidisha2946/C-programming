#include <stdio.h>
#include <string.h>
void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main() 
{
    int numbers[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);
    printf("Array elements: ");
    printArray(numbers, arraySize);
    char str[50];
    sprintf(str, "Array elements: %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
    printf("%s", str);
}
