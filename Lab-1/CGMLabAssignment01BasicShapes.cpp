/*
 * CGM Lab Assignment - 1
 * Question: Write a C/C++ program using a graphics library/tool to draw 
 *           the following basic graphics primitives in a single program:
 *           1. A straight line
 *           2. A circle
 *           3. A rectangle
 *           4. A triangle
 *
 * SUBMITTED BY : KHUSHVARDHAN JOHARI
 * Roll No      : IC-2K24-46
 */

#include <graphics.h> // Provides BGI graphics functions (line, circle, rectangle, etc.)
#include <conio.h>    // Provides getch() to pause the output screen
#include <string.h>   // Standard string header

int main()
{
    // Initialize graphics driver (auto-detect) and graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // Set large font (size 2) for the main assignment heading
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    setcolor(WHITE);
    outtextxy(140, 25, (char*)"CGM LAB ASSIGNMENT - 01");

    // Reset to standard font (size 1) for subtitle and student details
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
    setcolor(WHITE);
    outtextxy(200, 55, (char*)"Basic Shapes");
    outtextxy(140, 80, (char*)"Name: Khushvardhan Johari  |  Roll No: IC-2K24-46");

    // Draw outer border and center crosshairs in RED to create 4 quadrants
    setcolor(RED);
    rectangle(20, 110, 620, 430); // Outer boundary (600x320 px)
    line(320, 110, 320, 430);      // Vertical center divider (x = 320)
    line(20, 270, 620, 270);       // Horizontal center divider (y = 270)

    // --- Quadrant 1 (Top-Left): Straight Line ---
    setcolor(WHITE);
    outtextxy(40, 125, (char*)"Straight Line");
    line(60, 190, 280, 190);       // Horizontal line from (60,190) to (280,190)

    // --- Quadrant 2 (Top-Right): Circle ---
    setcolor(WHITE);
    outtextxy(340, 125, (char*)"2. Circle");
    circle(470, 190, 45);          // Circle at center (470,190) with radius 45 px

    // --- Quadrant 3 (Bottom-Left): Rectangle ---
    setcolor(WHITE);
    outtextxy(40, 285, (char*)"3. Rectangle");
    rectangle(70, 320, 270, 400);  // Rectangle from top-left (70,320) to bottom-right (270,400)

    // --- Quadrant 4 (Bottom-Right): Triangle ---
    setcolor(WHITE);
    outtextxy(340, 285, (char*)"4. Triangle");
    
    // Define the 3 vertices of the triangle
    int tx1 = 470, ty1 = 310;      // Top vertex
    int tx2 = 390, ty2 = 400;      // Bottom-left vertex
    int tx3 = 550, ty3 = 400;      // Bottom-right vertex
    
    // Connect the 3 vertices using lines to form a closed triangle
    line(tx1, ty1, tx2, ty2);      // Left edge
    line(tx2, ty2, tx3, ty3);      // Base edge
    line(tx3, ty3, tx1, ty1);      // Right edge

    // Hold the graphics window until a key is pressed, then free resources
    getch();
    closegraph();

    return 0;
}
