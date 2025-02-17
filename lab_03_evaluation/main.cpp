#include<bits/stdc++.h>
#include<windows.h>
#include <GL/glut.h>
using namespace std;
int x_1, y_1, x_2, y_2;
int x, y, p, dx, dy;

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);	// Set display window colour to white

    glMatrixMode(GL_PROJECTION);		// Set projection parameters
    gluOrtho2D(0.0, 300.0, 0.0, 400.0);
}

void drawShapes(void)
{
    glClear(GL_COLOR_BUFFER_BIT);	// Clear display window
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(10.0);
    while(x != x_2 && y != y_2)
    {
        glColor3f(1, 0.984, 0);
        glBegin(GL_POINTS);
        glVertex2i(x, y);
        glEnd();
        if(p < 0)
        {
            x = x + 1;
            y = y;
            p = p + 2 * dy;
        }
        else
        {
            x = x + 1;
            y = y + 1;
            p = p + 2 * dy - 2 * dx;
        }


    }


    glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
    cin >> x_1 >> y_1 >> x_2 >> y_2;
    dx = x_2 - x_1;
    dy = y_2 - y_1;
    p = 2 * dy - dx;
    x = x_1;
    y = y_1;

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
