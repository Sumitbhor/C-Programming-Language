#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
    int gd = DETECT ,gm ;
    initgraph(&gd, &gm, "");
    floodfill(1,1,WHITE);
    setcolor(BLACK);
    line(100,100,400,100);
    line(100,100,200,200);
    line(400,100,200,200);
    getch();
    closegraph();
    return 0;

}