#include<stdio.h>
#include<stdbool.h>

int main() {
    
    
    int a = 5;
    int b = 10;
    int c= 5;
    printf("%d\n", &a);
    printf("%d\n", &b);
    printf("%d\n", &c);
    printf("array addresses:\n");
    int arr[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%d\n", &arr[i]);
    }
    
    
    
    return 0;
}