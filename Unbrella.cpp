#include <graphics.h>
#include <conio.h>

void drawUmbrella() {




    arc(300, 200, 0, 180, 100);

   line(200,200,400,200);
   setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(299, 199, WHITE);

    line(300, 200, 300, 350);
    line(310,200,310,350);


    setfillstyle(SOLID_FILL, WHITE);
    floodfill(300, 201, WHITE);

    circle(305,370,20);
    setfillstyle(SOLID_FILL, RED);
    floodfill(305,370,WHITE);

}

int main() {

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");


    drawUmbrella();
    getch();
    closegraph();

    return 0;
}

