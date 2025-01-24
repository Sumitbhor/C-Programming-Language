#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
    int gd = DETECT ,gm ;
    initgraph(&gd, &gm, "");
    floodfill(1,1,WHITE);
    setcolor(BLACK);
    line(100,100,600,100);    
    line(100,100,100,500);    
    line(200,100,200,500);    
    line(100,500,150,550);    
    line(200,500,150,550);    
    line(150,550,500,550);    
    line(500,550,600,500);    
    line(200,500,600,500);    
    line(600,100,600,500); 
    getch();
    closegraph();
    return 0;

}
// g++ -Iinclude -c src/house.c -o build/house.o
//g++ ./build/house.o -o ./build/house.exe -l bgi -l gdi32 -l comdlg32 -l uuid -l oleaut32 -l ole32