#include "../include/function.h"
#include <stdio.h>

void read(int *num, int size) {
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
}
