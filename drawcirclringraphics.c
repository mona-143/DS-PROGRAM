#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;  // Graphics driver and mode

    // Initialize the graphics system
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Draw a circle (x, y, radius)
    circle(250, 200, 100);

    // Hold the screen until a key is pressed
    getch();

    // Close graphics mode
    closegraph();

    return 0;
}
