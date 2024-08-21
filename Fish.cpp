#include <graphics.h>
#include <conio.h>

void drawColoredFish()
{

    ellipse(300, 200, 0, 360, 100, 50);


    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(301, 201, WHITE);


    int tail[] = {400, 150, 450, 200, 400, 250, 400, 150};
    drawpoly(4, tail);



    setfillstyle(SOLID_FILL, RED);
    floodfill(400, 200, WHITE);


    setfillstyle(SOLID_FILL, RED);
    circle(250, 190, 10);
    floodfill(250, 190, WHITE);

    circle(250, 190, 3);
    setfillstyle(SOLID_FILL, BLACK);



    line(300, 150, 270, 100);
    line(270, 100, 330, 100);
    line(330, 100, 300, 150);


    setfillstyle(SOLID_FILL, RED);
    floodfill(300, 140, WHITE);


    line(300, 250, 270, 300);
    line(270, 300, 330, 300);
    line(330, 300, 300, 250);

    setfillstyle(SOLID_FILL, RED);
    floodfill(300, 260, WHITE);
    circle(150,200,5);
    circle(175,100,5);
}

int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    drawColoredFish();

    getch();

    closegraph();

    return 0;
}
