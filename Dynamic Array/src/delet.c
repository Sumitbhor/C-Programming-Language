#include "../include/function.h"
#include <stdio.h>
#include <stdlib.h>

void delet(int **num, int *size) {
    int element, result;
    printf("Enter the element to delete: ");
    scanf("%d", &element);

    result = search(*num, *size, element);

    if (result == -1) {
        printf("Element not found.\n");
    } else {
        for (int i = result; i < *size - 1; i++) {
            (*num)[i] = (*num)[i + 1];
        }
        (*size)--;
        *num = (int *)realloc(*num, (*size) * sizeof(int));
        printf("Element deleted successfully.\n");
    }
}
