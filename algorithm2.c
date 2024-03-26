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

