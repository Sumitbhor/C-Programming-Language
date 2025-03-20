#include "../include/function.h"
#include <stdlib.h>
#include <stdio.h>

void create(int **ptrArray, int *ptrSize) {
    int newSize;
    printf("\nEnter the number of elements to add: ");
    scanf("%d", &newSize);

    *ptrArray = (int *)realloc(*ptrArray, (*ptrSize + newSize) * sizeof(int));

    if (*ptrArray == NULL) {
        printf("\nMemory allocation failed");
        exit(1);
    }

    for (int i = *ptrSize; i < *ptrSize + newSize; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &(*ptrArray)[i]);
    }

    *ptrSize += newSize;
    printf("%d elements added.\n", newSize);
}
