#include "../include/function.h"
#include <stdio.h>

void read(int *ptrArray, int size) {
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", ptrArray[i]);
    }
    printf("\n");
}
