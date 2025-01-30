#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // House    
    line(100, 100, 200, 100);
    line(200, 100, 200, 200);
    line(200, 200, 100, 200);
    line(100, 200, 100, 100);
    line(100, 100, 150, 50);
    line(150, 50, 200, 100);
    line(125, 100, 125, 200);
    line(125, 200, 175, 200);
    line(175, 200, 175, 100);
    line(125, 100, 175, 100);

    getch();
    closegraph();
    return 0;
}
// g++ -Iinclude -c src/house.c -o build/house.o
// g++ ./build/house.o -o ./build/house.exe -l bgi -l gdi32 -l comdlg32 -l uuid -l oleaut32 -l ole32