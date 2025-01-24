#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int barchart(int totalstudent){
    int marks[totalstudent];
    int j=0;
    
    for (int i = 0; i < totalstudent; i++)
    {
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &marks[i]);
        rectangle(100+j,400,120+j,400-marks[i]);
        j+=40;
    }
}
int main(){
    int gd = DETECT ,gm ;
    initgraph(&gd, &gm, "");
    floodfill(1,1,WHITE);
    
    int totalstudent;
    printf("enter totalnumber of student: ");
    scanf("%d", &totalstudent);
    setcolor(BLACK);
    barchart(totalstudent);
    getch();
    closegraph();
    return 0;

}
// g++ -Iinclude -c src/student.c -o build/student.o
// g++ ./build/student.o -o ./build/student.exe -l bgi -l gdi32 -l comdlg32 -l uuid -l oleaut32 -l ole32