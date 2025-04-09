#include<bits/stdc++.h>
#include<windows.h>
#include <GL/glut.h>
using namespace std;
int x, y, p;
void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);	// Set display window colour to white

    glMatrixMode(GL_PROJECTION);		// Set projection parameters
    gluOrtho2D(0, 1080, 0.0, 780.0);
}

void drawShapes(void)
{
    glClear(GL_COLOR_BUFFER_BIT);	// Clear display window
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(10.0);

    // H1 ------------
    //quad -1
     glColor4f(0.361, 0.357, 0.349, 0.49);
        glBegin(GL_POLYGON);
        glVertex2i(6, 300);
        glVertex2i(30, 300);
        glVertex2i(30, 450);
        glVertex2i(6, 468);
    glEnd();

    //quad -2
     glColor3f(0.149, 0.145, 0.137);
        glBegin(GL_POLYGON);
        glVertex2i(30, 300);
        glVertex2i(132, 300);
        glVertex2i(132, 450);
        glVertex2i(30, 450);
    glEnd();

    //quad -3
     glColor4f(0.361, 0.357, 0.349, 0.49);
        glBegin(GL_POLYGON);
        glVertex2i(30, 450);
         glVertex2i(132, 450);
        glVertex2i(132, 468);
        glVertex2i(6, 468);
    glEnd();

    // H2 ------------
    //quad -1
     glColor3f(0.722, 0.557, 0.043);
        glBegin(GL_POLYGON);
        glVertex2i(162, 300);
        glVertex2i(264, 300);
        glVertex2i(264, 342);
        glVertex2i(162, 342);
    glEnd();

    //quad-2:
    glColor3f(0.222, 0.857, 0.043);
        glBegin(GL_POLYGON);
        glVertex2i(156, 342);
        glVertex2i(270, 342);
        glVertex2i(270, 372);
        glVertex2i(156, 372);
    glEnd();

    // H3 ------------
    //quad -1
     glColor3f(0.122, 0.357, 0.743);
        glBegin(GL_POLYGON);
        glVertex2i(300, 300);
        glVertex2i(390, 300);
        glVertex2i(390, 372);
        glVertex2i(300, 372);
    glEnd();

    //quad-2:
    glColor3f(0.222, 0.857, 0.043);
        glBegin(GL_POLYGON);
        glVertex2i(282, 372);
        glVertex2i(408, 372);
        glVertex2i(390, 396);
        glVertex2i(300, 396);
    glEnd();

    // H4 ------------
    //quad -1
     glColor3f(0.122, 0.357, 0.743);
        glBegin(GL_POLYGON);
        glVertex2i(402, 300);
        glVertex2i(510, 300);
        glVertex2i(510, 420);
        glVertex2i(402, 420);
    glEnd();

    //quad-2:
    glColor3f(0.222, 0.857, 0.043);
        glBegin(GL_POLYGON);
        glVertex2i(384, 420);
        glVertex2i(528, 420);
        glVertex2i(504, 450);
        glVertex2i(408, 450);
    glEnd();

    // H5 ------------
    //quad -1
     glColor3f(0.122, 0.357, 0.743);
        glBegin(GL_POLYGON);
        glVertex2i(540, 300);
        glVertex2i(660, 300);
        glVertex2i(660, 540);
        glVertex2i(540, 540);
    glEnd();

    //quad-2:
    glColor3f(0.222, 0.857, 0.043);
        glBegin(GL_POLYGON);
        glVertex2i(552, 540);
        glVertex2i(648, 540);
        glVertex2i(648, 660);
        glVertex2i(552, 662);
    glEnd();

    // H6 ------------
    //quad -1
     glColor3f(0.122, 0.357, 0.743);
        glBegin(GL_POLYGON);
        glVertex2i(720, 300);
        glVertex2i(834, 300);
        glVertex2i(834, 480);
        glVertex2i(720, 480);
    glEnd();

    //quad-2:
    glColor3f(0.222, 0.857, 0.043);
        glBegin(GL_POLYGON);
        glVertex2i(834, 300);
       glVertex2i(852, 300);
        glVertex2i(852, 498);
        glVertex2i(834, 480);
    glEnd();

    //quad -3
     glColor3f(0.122, 0.357, 0.743);
        glBegin(GL_POLYGON);
        glVertex2i(720, 480);
        glVertex2i(834, 480);
        glVertex2i(852, 498);
        glVertex2i(738, 498);
    glEnd();




    glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
    int r = 100;
    x = 0;
    y = r;
    p = 1 - r;

    glutInit(&argc, argv);						// Initalise GLUT
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

    glutInitWindowPosition(100, 100);				// Set window position
    glutInitWindowSize(350, 350);					// Set window size
    glutCreateWindow("An Example OpenGL Program");	// Create display window

    init();							// Execute initialisation procedure
    glutDisplayFunc(drawShapes);		// Send graphics to display window
    glutMainLoop();					// Display everything and wait

    return 0;
}
