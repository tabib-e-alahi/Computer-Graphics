#include<bits/stdc++.h>
#include<windows.h>
#include <GL/glut.h>
using namespace std;
int x, y, p;
void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);	// Set display window colour to white

    glMatrixMode(GL_PROJECTION);		// Set projection parameters
    gluOrtho2D(-800, 800.0, -800.0, 800.0);
}

void drawShapes(void)
{
    glClear(GL_COLOR_BUFFER_BIT);	// Clear display window
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(10.0);

     glColor3f(0.822, 0.557, 0.043);
        glBegin(GL_POLYGON);
        glVertex2i(-560, 300);
        glVertex2i(-500, 300);
        glVertex2i(-530, 380);
    glEnd();

    glColor3f(0.722, 0.557, 0.043);
        glBegin(GL_POLYGON);
        glVertex2i(-700, -740);
        glVertex2i(-700, -780);
        glVertex2i(-360, -780);
        glVertex2i(-360, -740);
    glEnd();

    glColor3f(0.643, 0.106, 0.89);
        glBegin(GL_POLYGON);
        glVertex2i(-660, -700);
        glVertex2i(-660, -740);
        glVertex2i(-400, -740);
        glVertex2i(-400, -700);
    glEnd();

    // khamba
    glColor3f(1, 0.984, 0);
        glBegin(GL_POLYGON);
        glVertex2i(-560, 300);
        glVertex2i(-560, -700);
        glVertex2i(-500, -700);
        glVertex2i(-500, 300);
    glEnd();

    //outer quad
    glColor3f(0.063, 0.71, 0.055);
        glBegin(GL_POLYGON);
        glVertex2i(-500, 300);
        glVertex2i(-500, -300);
        glVertex2i(500, -300);
        glVertex2i(500, 300);
    glEnd();

    //loop for quad(inner)
    glColor3f(1, 0.984, 0);
        glBegin(GL_POLYGON);
        glVertex2i(-300, 0);
        glVertex2i(0, -200);
        glVertex2i(300, 0);
        glVertex2i(0, 200);
    glEnd();

    // loop for circle
    while(x <= y)
    {
        glColor3f(0.169, 0.18, 0.922);
        glBegin(GL_POLYGON);
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


    glFlush();
}
int main(int argc, char* argv[])
{
    int r = 100;
    x = 0;
    y = r;
    p = 1 - r;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

    glutInitWindowPosition(100, 100);
    glutInitWindowSize(350, 350);
    glutCreateWindow("An Example OpenGL Program");

    init();
    glutDisplayFunc(drawShapes);
    glutMainLoop();

    return 0;
}
