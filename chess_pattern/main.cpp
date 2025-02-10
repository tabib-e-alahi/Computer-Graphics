#include<windows.h>
#include <GL/glut.h>


void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);	// Set display window colour to white

    glMatrixMode(GL_PROJECTION);		// Set projection parameters
    gluOrtho2D(40.0, 200.0, 40.0, 360.0);
}

void drawShapes(void)
{
    glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

    //Set colour to black

    glColor3f(0.0, 0.0, 0.0);
    //Adjust the point size
    glPointSize(10.0);


    int x = 0, y = 0, i,j;

    for(i = 1; i<=6; i++)
    {
        for(j = 1; j<=9; j++)
        {
            if((i % 2 == 0 && j % 2 != 0) || (i % 2 != 0 && j % 2 == 0))
            {
                glColor3f(1.0, 1, 1);
                glBegin(GL_QUADS);
                glVertex2i(20 + x, 20+y);//a
                glVertex2i(40+x, 0+y);//b
                glVertex2i(40+x, 80+y);//c
                glVertex2i(20+x, 60+y);//d
                glEnd();
                x+=20;
            }
            else{
                glColor3f(0.0, 0, 0);
                glBegin(GL_QUADS);
                glVertex2i(20+x, 0+y);//c
                glVertex2i(40+x, 20+y);//b
                glVertex2i(40 + x, 60+y);//a
                glVertex2i(20+x, 80+y);//d


                glEnd();
                x+=20;
            }
        }
        x=0;
        y+=60;
    }


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
