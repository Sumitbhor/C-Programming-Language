#include "../include/function.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int element, result;
    int *num = NULL;
    int size = 0;
    int option;

    printf("Welcome to Dynamic Array CRUD Operations\n");

    while (1) {
        printf("\nCRUD Operation Menu\n");
        printf("1. Create\n");
        printf("2. Read\n");
        printf("3. Update\n");
        printf("4. Delete\n");
        printf("5. Search\n");
        printf("6. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Option Selected: Create\n");
                create(&num, &size);
                break;
            case 2:
                printf("Option Selected: Read\n");
                read(num, size);
                break;
            case 3:
                printf("Option Selected: Update\n");
                // Add update logic
                break;
            case 4:
                printf("Option Selected: Delete\n");
                delet(&num, &size);
                break;
            case 5:
                printf("Option Selected: Search\n");
                printf("Enter the element to search: ");
                scanf("%d", &element);
                result = search(num, size, element);
                if (result == -1) {
                    printf("Element not found.\n");
                } else {
                    printf("Element found at index: %d\n", result);
                }
                break;
            case 6:
                printf("Exiting program.\n");
                free(num);
                return 0;
            default:
                printf("Invalid option.\n");
                break;
        }
    }
    return 0;
}
/* g++ -Iinclude -c ./src/main.c -o ./build/main.o
g++ -Iinclude -c ./src/create.c -o ./build/create.o
g++ -Iinclude -c ./src/delet.c -o ./build/delet.o
g++ -Iinclude -c ./src/read.c -o ./build/read.o
g++ -Iinclude -c ./src/search.c -o ./build/search.o
g++ -Iinclude -c ./src/update.c -o ./build/update.o

g++ ./build/main.o ./build/create.o ./build/delet.o ./build/read.o ./build/search.o -o ./build/output.exe
*/