#include "../include/function.h"
#include <stdio.h>

int search(int *num, int size, int theelement) {
    for (int i = 0; i < size; i++) {
        if (num[i] == theelement) {
            return i;  // Return the index
        }
    }
    return -1;  // Element not found
}
