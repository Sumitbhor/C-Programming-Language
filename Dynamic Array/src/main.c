//dynamic array 
#include<stdio.h>
#include<stdlib.h>
#include"../include/function.h"

int main()  //Entry point function
{
    int element, result;
    int *ptrArray=NULL;
    int size=0;
    printf("Welcome to Dynamic array CRUD Opereaetion ");
    int option=1;

        while (1){     
            printf("CRUD Operation menu\n");
            printf("1.Create\n");
            printf("2.Read\n");
            printf("3.Update \n");
            printf("4.Delete\n");
            printf("5.Search\n");
            printf("6.exit\n");
            scanf("%d",&option);
            switch (option){
                case 1:   //create
                    printf("Option Selected: Create\n ");
                    create(&ptrArray,&size);
                    break;
                case 2:    //read
                    printf("Option Selected: Read\n ");
                    read(ptrArray, size);
                    break;//update
                case 3:
                    printf("Option Selected: Update\n ");
                    break;
                case 4:       //Delete
                    printf("Option Selected: Delete\n ");
                    delete( &ptrArray,  &size);
                    break;
                case 5:  //Search
                    
                    printf("Option Selected: Search\n ");
                    printf("enter your element ");
                    scanf("%d",&element);
                    result = search(ptrArray,size,element);
                   if (result==-1){
                    printf("element not found");
                   }
                   else
                   {
                    printf("your element : %d\n",result);
                   }
                   break;
                case 6:  //Exit
                    printf("Option Selected: exit\n ");
                    return 0;
                    break;

                default:
                    printf("invalid option");
                    break;
            }
        }
        return 0;
    }


void create(int ** ptrArray, int * ptrSize ){
    int newSize;
    printf("\n Enter the number of element to add");
    scanf("%d",&newSize);
    *ptrArray = (int*)realloc(*ptrArray, sizeof(*ptrSize + newSize) * sizeof(int));

        if (*ptrArray==NULL){
            printf("\nMemory allcation failed");
            exit(1);
        }

        for (int  i = *ptrSize; i < *ptrSize+newSize; i++){
            printf("Enter element %d\n", i+1);
         scanf("%d",& (*ptrArray)[i]);
        }

    *ptrSize+=newSize;
    printf("%d elements added \n",newSize);
}


void read(int *ptrArray, int size){
    printf("Array elements \n");

        for (int  i = 0; i < size; i++){
            printf("%d\n ",ptrArray[i]);
        }

        printf("\n");
}
int search(int *ptrArray, int size,int theelement){
        for (int i = 0; i < size; i++) {
        if (ptrArray[i] == theelement) {
            return ptrArray[i];  // Return the index of the found element
        }
    }
    return -1;  
}
void delete(int **ptrArray, int *size){
    int element,result;
    printf("enter your element ");
    scanf("%d",&element);
    result = search(ptrArray, size,element);
    
    if (result==-1){
    printf("element not found");
    }
    else{
        for (int i = result; i < *size - 1; i++) {
            (*ptrArray)[i] = (*ptrArray)[i + 1];
        }
        (*size)--;
        *ptrArray = realloc(*ptrArray, (*size) * sizeof(int));
        if (*ptrArray == NULL && *size > 0) {
            printf("Memory reallocation failed");
            exit(1);
        }
        
    }
}
//g++ -Iinclude -c ./src/main.c -o ./build/main.o
//g++ ./build/main.o -o ./build/output.exe
