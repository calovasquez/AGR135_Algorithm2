#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <GL/freeglut.h>
#include "./algorithm2.h"

// Set the background color and matrix mode
void initialize(void){
    glClearColor(1, 1, 1, 1); // White color
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 700, 0, 700); // 700x700
}

// Main function
void draw(void){
    glClear(GL_COLOR_BUFFER_BIT);
        carnet();
    glFlush();
}

// Function to draw my carnet
void algorithm2(float x1, float y1, float x2, float y2) {
    float dx = (x2 - x1);
    float dy = (y2 - y1);
    float steps, xIncrease, yIncrease, x = x1, y = y1;
    steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    xIncrease = (dx / steps);
    yIncrease = (dy / steps);
    glBegin(GL_POINTS);
    for (float step = 0; step < steps; step++) {
        glVertex2f(x,y);
        x+=xIncrease;
        y+=yIncrease;
    }
    glEnd();
}

void carnet(){
    glColor3i(0, 0, 0); // Black color
    
    // Coordinates to draw my carnet
    
        // Letter V
        algorithm2(20, 440, 80, 260);
        algorithm2(80, 260, 140, 440);

        // Letter G
        algorithm2(260, 440, 160, 440);
        algorithm2(160, 440, 160, 260);
        algorithm2(160, 260, 260, 260);
        algorithm2(260, 260, 260, 350);
        algorithm2(260, 350, 210, 350);
        algorithm2(210, 350, 210, 320);

        // Number 2
        algorithm2(280, 420, 280, 440);
        algorithm2(280, 440, 360, 440);
        algorithm2(360, 440, 360, 350);
        algorithm2(360, 350, 280, 350);
        algorithm2(280, 350, 280, 260);
        algorithm2(280, 260, 360, 260);
        algorithm2(360, 260, 360, 280);

        // Number 1
        algorithm2(380, 380, 430, 440);
        algorithm2(430, 440, 430, 260);

        // Number 0
        algorithm2(510, 440, 450, 440);
        algorithm2(450, 440, 450, 260);
        algorithm2(450, 260, 510, 260);
        algorithm2(510, 260, 510, 440);

        // Number 0
        algorithm2(590, 440, 530, 440);
        algorithm2(530, 440, 530, 260);
        algorithm2(530, 260, 590, 260);
        algorithm2(590, 260, 590, 440);

        // Number 9
        algorithm2(680, 260, 680, 440);
        algorithm2(680, 440, 610, 440);
        algorithm2(610, 440, 610, 360);
        algorithm2(610, 360, 680, 360);
}