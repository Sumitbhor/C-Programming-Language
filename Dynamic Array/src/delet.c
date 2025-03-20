#include "../include/function.h"
#include <stdio.h>
#include <stdlib.h>

void delet(int **ptrArray, int *size) {
    int element, result;
    printf("Enter the element to delete: ");
    scanf("%d", &element);

    result = search(*ptrArray, *size, element);

    if (result == -1) {
        printf("Element not found.\n");
    } else {
        for (int i = result; i < *size - 1; i++) {
            (*ptrArray)[i] = (*ptrArray)[i + 1];
        }
        (*size)--;
        *ptrArray = (int *)realloc(*ptrArray, (*size) * sizeof(int));
        printf("Element deleted successfully.\n");
    }
}
