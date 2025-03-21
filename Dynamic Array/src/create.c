#include "../include/function.h"
#include <stdlib.h>
#include <stdio.h>

void create(int **num, int *ptrSize) {
    int newSize;
    printf("\nEnter the number of elements to add: ");
    scanf("%d", &newSize);

    *num = (int *)realloc(*num, (*ptrSize + newSize) * sizeof(int));

    if (*num == NULL) {
        printf("\nMemory allocation failed");
        exit(1);
    }

    for (int i = *ptrSize; i < *ptrSize + newSize; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &(*num)[i]);
    }

    *ptrSize += newSize;
    printf("%d elements added.\n", newSize);
}
//**ptrnum =&num
// **ptrnum=*ptrnum
//ptrnum
//&*num