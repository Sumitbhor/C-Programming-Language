#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main(){
    int gd = DETECT, gm;
    int marks1, marks2, marks3;
    initgraph(&gd, &gm, "");
    printf("****track your jee priparation****\n");
    printf("\nenter you mock test1 marks ");
    scanf("%d",&marks1);
    printf("enter you mock test2 marks ");
    scanf("%d",&marks2);
    printf("enter you mock test3 marks ");
    scanf("%d",&marks3);
    floodfill(1, 1, WHITE);
    setcolor(BLACK);
    line(0,400, 100, 400-marks1);
    line(100,400-marks1, 200, 400-marks2);
    line(200,400 - marks2, 300, 400-marks3);

    
    getch();
    closegraph();
    return 0;
}
// g++ -Iinclude -c ./src/graphics.c -o ./build/trackjee.o  
// g++ ./build/trackjee.o -o ./build/trackjee.exe -l bgi -l gdi32 -l comdlg32 -l uuid -l oleaut32 -l ole32