#include<bits/stdc++.h>
#include<windows.h>
#include <GL/glut.h>
using namespace std;
int x, y, p;
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);	// Set display window colour to white

    glMatrixMode(GL_PROJECTION);		// Set projection parameters
    gluOrtho2D(-400, 400.0, -400.0, 400.0);
}

void drawShapes(void)
{
    glClear(GL_COLOR_BUFFER_BIT);	// Clear display window
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(2.0);
    while(x <= y)
    {
        glColor3f(1, 0.984, 0);
        glBegin(GL_POINTS);
        glVertex2i(x, y);
        glVertex2i((-1) * x, y);
        glVertex2i((-1) *x,(-1) *y);
        glVertex2i(x, (-1) *y);

        glVertex2i(y, x);
        glVertex2i((-1) * y, x);
        glVertex2i((-1) *y,(-1) *x);
        glVertex2i(y, (-1) *x);

        glEnd();
        if(p < 0)
        {
            p = p + 2 * x + 1;
            x = x + 1;
            y = y;
        }
        else
        {
            p = p + 2 * x + 1 - 2 * y;
            x = x + 1;
            y = y - 1;
        }
    }


    glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
    int r;
    cout << "Enter radius r: ";
    cin >> r;
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
