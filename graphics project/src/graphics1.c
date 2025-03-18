#include <graphics.h>
#include <conio.h>
#include <math.h>

#define SCALE 5  // Scaling factor for better visibility

void drawProjection() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");  // Initialize graphics mode

    int xMid = getmaxx() / 2; // Midpoint of the screen (X-axis)
    int yMid = getmaxy() / 2; // Midpoint of the screen (Y-axis)
    
    int xyLineY = yMid; // XY reference line position

    // Given values
    int Ax = xMid;  // A is in VP, so its top view lies on XY line
    int Ay = xyLineY - (20 * SCALE); // A' is 20mm above HP in the front view

    int projectorDist = 40 * SCALE; // Scaled projector distance

    // B' position using front view inclination (43°)
    int Bx_fv = Ax + projectorDist;
    int By_fv = Ay + (projectorDist * tan(43 * M_PI / 180));

    // B position using top view inclination (47°)
    int Bx_tv = Ax + projectorDist;
    int By_tv = xyLineY + (projectorDist * tan(47 * M_PI / 180));

    // Drawing XY Reference Line
    setcolor(WHITE);
    line(0, xyLineY, getmaxx(), xyLineY);  
    outtextxy(xMid + 10, xyLineY - 10, "XY Line");

    // Drawing front view A'B'
    setcolor(YELLOW);
    circle(Ax, Ay, 3); // Point A'
    outtextxy(Ax + 5, Ay - 5, "A'");
    line(Ax, Ay, Bx_fv, By_fv);  // A'B' line
    circle(Bx_fv, By_fv, 3); // Point B'
    outtextxy(Bx_fv + 5, By_fv - 5, "B'");

    // Drawing top view AB
    setcolor(CYAN);
    circle(Ax, xyLineY, 3); // Point A (on XY line)
    outtextxy(Ax + 5, xyLineY + 5, "A");
    line(Ax, xyLineY, Bx_tv, By_tv);  // AB line
    circle(Bx_tv, By_tv, 3); // Point B
    outtextxy(Bx_tv + 5, By_tv + 5, "B");

    // Draw projectors between corresponding points
    setcolor(LIGHTGRAY);
    line(Bx_fv, By_fv, Bx_tv, By_tv); // Vertical projector for B'
    line(Ax, Ay, Ax, xyLineY); // Vertical projector for A'

    getch(); // Wait for user input
    closegraph(); // Close graphics mode
}

int main() {
    drawProjection();
    return 0;
}

//cd C-Programming-Language
// cd graphics project
//g++ -Iinclude -c ./src/graphics1.c -o ./build/graphics1.o  
//g++ ./build/graphics1.o -o ./build/graphics1.exe -l bgi -l gdi32 -l comdlg32 -l uuid -l oleaut32 -l ole32