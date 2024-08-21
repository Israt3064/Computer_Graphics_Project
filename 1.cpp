#include <graphics.h>
#include <conio.h>  // For getch()

int main() {
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, (char*)"");

    // Draw a line from (100, 100) to (300, 300)
    line(100, 100, 300, 300);

    // Draw a rectangle with top-left corner at (150, 150) and bottom-right corner at (350, 250)
    rectangle(150, 150, 350, 250);

    // Draw a circle with center at (200, 200) and radius 50
    circle(200, 200, 50);

    // Set the color and draw a filled ellipse with center at (400, 200)
    setcolor(RED);
    fillellipse(400, 200, 50, 25);

    // Draw a polygon (triangle) with vertices (400, 300), (500, 400), (300, 400)
    int points[] = {400, 300, 500, 400, 300, 400, 400, 300};
    drawpoly(4, points);  // drawpoly expects number of points + 1 (for closure)

    // Wait for the user to press a key
    getch();

    // Close the graphics mode
    closegraph();

    return 0;
}

