#include<windows.h>
#include <GL/glut.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

	//Set colour to black

	glColor3f(0.0, 0.0, 0.0);
	//Adjust the point size
	glPointSize(10.0);

	// Draw a couple of points

	//Set colour to red
	glColor3f(0.031, 0.682, 0.949);

	// Draq the quads
	glBegin(GL_QUADS);
		glVertex2i(40, 40);
		glVertex2i(240, 40);
		glVertex2i(240, 300);
		glVertex2i(40, 300);

    glEnd();

    glColor3f(0.949, 0.506, 0.031);
    glBegin(GL_TRIANGLES);
		glVertex2i(10, 300);
		glVertex2i(270, 300);
		glVertex2i(150, 380);


    glEnd();
    glColor3f(0.949, 0.812, 0.031);
    glBegin(GL_QUADS);
		glVertex2i(120, 40);
		glVertex2i(160, 40);
		glVertex2i(160, 140);
		glVertex2i(120, 140);


    glEnd();

     glColor3f(0.949, 0.812, 0.031);
    glBegin(GL_QUADS);
		glVertex2i(50, 140);
		glVertex2i(100, 140);
		glVertex2i(100, 200);
		glVertex2i(50, 200);

    glEnd();

    glColor3f(0.949, 0.812, 0.031);
    glBegin(GL_QUADS);
		glVertex2i(180, 140);
		glVertex2i(230, 140);
		glVertex2i(230, 200);
		glVertex2i(180, 200);

    glEnd();



	glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
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
