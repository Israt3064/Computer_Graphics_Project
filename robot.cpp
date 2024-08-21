#include <graphics.h>
#include <conio.h>

void drawRobot() {
    // Set the background color to white
    setbkcolor(WHITE);
    cleardevice();

    // Set the drawing color to black
    setcolor(BLACK);

    // Draw the robot's head (rectangle)
    rectangle(200, 100, 300, 200);
    // Draw the robot's body (rectangle)
    rectangle(175, 200, 325, 350);
    // Draw the robot's arms (lines)
    line(175, 250, 125, 275); // Left arm
    line(325, 250, 375, 275); // Right arm
    // Draw the robot's legs (lines)
    line(200, 350, 200, 400); // Left leg
    line(300, 350, 300, 400); // Right leg
    // Draw the robot's eyes (circles)
    circle(225, 150, 10); // Left eye
    circle(275, 150, 10); // Right eye
    // Draw the robot's mouth (line)
    line(225, 175, 275, 175);
}

int main() {
    // Initialize the graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Call the function to draw the robot
    drawRobot();

    // Hold the output screen until a key is pressed
    getch();

    // Close the graphics mode
    closegraph();

    return 0;
}
