#include<iostream>
#include <conio.h>
#include <graphics.h>

int main()
{

    int gd =  DETECT, gm;
    initgraph(&gd,&gm," ");

    circle(300,200,80);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(300,200,15);


    ellipse(280,180,0,360,8,13);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(280,180,15);


    ellipse(320,180,0,360,8,13);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(320,180,15);


    setcolor(BLACK);
    ellipse(300,225,185,355,32,20);
    ellipse(300,225,185,355,31,19);
    ellipse(300,225,185,355,30,18);
    ellipse(300,225,185,355,29,17);



    getch();

    closegraph();

    return 0;
}
