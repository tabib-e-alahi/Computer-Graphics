#include<windows.h>
#include <GL/glut.h>

void init(void)
{
    glClearColor(0.125, 0.62, 0.812, 0.0);	// Set display window color to white

    glMatrixMode(GL_PROJECTION);		// Set projection parameters
    gluOrtho2D(0.0, 400.0, 0.0, 600.0);
}

void drawShapes(void)
{
    glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

    //Set color to black

    glColor3f(0.0, 0.0, 0.0);
    //Adjust the point size
    glPointSize(10.0);

    // Draw a couple of points

    //MAIN AREA QUAD-0
    glColor3f(0.027, 0.549, 0.027);
    glBegin(GL_QUADS);
    glVertex2i(0, 10);
    glVertex2i(400, 0);
    glVertex2i(400, 400);
    glVertex2i(0, 400);

    glEnd();

    //QUAD-1
    glColor3f(0.729, 0.071, 0.157);
    glBegin(GL_QUADS);
    glVertex2i(50, 130);
    glVertex2i(110, 100);
    glVertex2i(110, 180);
    glVertex2i(50, 180);
        //QUAD-4: Garage Door
    glColor3f(0.063, 0.4, 0.063);
    glBegin(GL_QUADS);
    glVertex2i(70, 120);
    glVertex2i(90, 110);
    glVertex2i(90, 150);
    glVertex2i(70, 150);
    glEnd();

    //QUAD-2
    glColor3f(0.629, 0.071, 0.157);
    glBegin(GL_QUADS);
    glVertex2i(110, 100);
    glVertex2i(220, 120);
    glVertex2i(220, 180);
    glVertex2i(110, 180);
    //QUAD-5: Main Door
    glColor3f(0.71, 0.667, 0.075);
    glBegin(GL_QUADS);
    glVertex2i(150, 108);
    glVertex2i(180, 113);
    glVertex2i(180, 160);
    glVertex2i(150, 160);
    glEnd();

    //QUAD-3
    glColor3f(0.678, 0.447, 0.039);
    glBegin(GL_QUADS);
    glVertex2i(110, 180);
    glVertex2i(230, 180);
    glVertex2i(200, 230);
    glVertex2i(80, 230);

    glEnd();


    //TRAIANGLE-1
    glColor3f(0.741, 0.588, 0.318);
    glBegin(GL_TRIANGLES);
    glVertex2i(80, 230);
    glVertex2i(50, 180);
    glVertex2i(110, 180);
    glEnd();

    //============ 2nd house ============

    //QUAD-1
    glColor3f(0.60, 0.00, 0.00);
    glBegin(GL_QUADS);
    glVertex2i(280, 50);
    glVertex2i(340, 50);
    glVertex2i(340, 130);
    glVertex2i(280, 130);
       //QUAD-2: Door
    glColor3f(0.80, 0.00, 0.00);
    glBegin(GL_QUADS);
    glVertex2i(300, 50);
    glVertex2i(320, 50);
    glVertex2i(320, 95);
    glVertex2i(300, 95);
    glEnd();


    //TRAIANGLE-1
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(270, 130);
    glVertex2i(350, 130);
    glVertex2i(310, 180);
    glEnd();

    glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
    glutInit(&argc, argv);						// Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

    glutInitWindowPosition(100, 100);				// Set window position
    glutInitWindowSize(350, 350);					// Set window size
    glutCreateWindow("An Example OpenGL Program");	// Create display window

    init();							// Execute initialization procedure
    glutDisplayFunc(drawShapes);		// Send graphics to display window
    glutMainLoop();					// Display everything and wait

    return 0;
}
