#include <graphics.h>
#include <conio.h>

void drawUmbrella() {
    // Set the background color to light blue
    setbkcolor(LIGHTBLUE);
    cleardevice();

    // Set the color for the umbrella outline
    setcolor(BLACK);

    // Draw the umbrella canopy (arc)
    arc(300, 200, 0, 180, 100);  // Center (300, 200), Radius 100, Arc from 0 to 180 degrees

    // Draw lines to divide the canopy into segments
    line(200, 200, 300, 100);  // Left side
    line(300, 100, 400, 200);  // Right side
    line(250, 150, 300, 200);  // Left inner
    line(350, 150, 300, 200);  // Right inner

    // Fill the umbrella segments with different colors
    setfillstyle(SOLID_FILL, RED);
    floodfill(250, 180, BLACK);  // Left segment

    setfillstyle(SOLID_FILL, GREEN);
    floodfill(300, 180, BLACK);  // Center segment

    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(350, 180, BLACK);  // Right segment

    // Draw the umbrella handle (line and rectangle)
    setcolor(BLACK);
    line(300, 200, 300, 350);  // Umbrella stick

    // Draw the handle (rectangle) and fill it with brown
    rectangle(290, 350, 310, 380);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(300, 360, BLACK);

    // Optional: Draw raindrops (small blue circles) for effect
    setcolor(BLUE);
    circle(270, 400, 5);
    circle(320, 420, 5);
    circle(350, 390, 5);
}

int main() {
    // Initialize the graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Call the function to draw the colorful umbrella
    drawUmbrella();

    // Hold the output screen until a key is pressed
    getch();

    // Close the graphics mode
    closegraph();

    return 0;
}

