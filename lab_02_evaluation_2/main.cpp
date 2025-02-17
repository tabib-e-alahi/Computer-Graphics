void drawShapes(void)
{
    glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

    //Set colour to black

    glColor3f(0.0, 0.0, 0.0);
    //Adjust the point size
    glPointSize(10.0);

    // Draw a couple of points

    //Set colour to red
    glColor3f(0.349, 0.337, 0.337);

    // Draq the quads
    glBegin(GL_QUADS);
    glVertex2i(100, 50);
    glVertex2i(150, 50);
    glVertex2i(175, 100);
    glVertex2i(75, 100);

    glEnd();

    glColor3f(0.91, 0.58, 0.039);
    glBegin(GL_QUADS);
    glVertex2i(120, 100);
    glVertex2i(130, 100);
    glVertex2i(130, 225);
    glVertex2i(120, 225);

    glEnd();

    glColor3f(0.184, 0.627, 0.961);
    glBegin(GL_POLYGON);
    glVertex2i(100, 225);
    glVertex2i(150, 225);
    glVertex2i(165, 265);
    glVertex2i(150, 300);
    glVertex2i(100, 300);
    glVertex2i(85, 265);

    glEnd();

    glColor3f(0.184, 0.627, 0.961);
    glBegin(GL_POLYGON);
    glVertex2i(35, 270);
    glVertex2i(75, 270);
    glVertex2i(95, 305);
    glVertex2i(75, 340);
    glVertex2i(35, 340);
    glVertex2i(15, 305);

    glEnd();

    glColor3f(0.184, 0.627, 0.961);
    glBegin(GL_POLYGON);
    glVertex2i(105, 310);
    glVertex2i(145, 310);
    glVertex2i(160, 350);
    glVertex2i(145, 375);
    glVertex2i(105, 375);
    glVertex2i(90, 350);

    glEnd();

    glColor3f(0.184, 0.627, 0.961);
    glBegin(GL_POLYGON);
    glVertex2i(180, 265);
    glVertex2i(225, 265);
    glVertex2i(245, 300);
    glVertex2i(225, 340);
    glVertex2i(180, 340);
    glVertex2i(165, 300);

    glEnd();

    glColor3f(0.02, 0.439, 0.02);
    glBegin(GL_QUADS);
    glVertex2i(35, 155);
    glVertex2i(75, 140);
    glVertex2i(80, 150);
    glVertex2i(25, 175);

    glEnd();

    glColor3f(0.02, 0.439, 0.02);
    glBegin(GL_QUADS);
    glVertex2i(25, 185);
    glVertex2i(80, 155);
    glVertex2i(75, 175);
    glVertex2i(45, 195);

    glEnd();


    glFlush();	// Process all OpenGL routines
}


glColor3f(0.643, 0.678, 0.871);
    int x = 0, y = 0, i,j;
    for(j = 0; j<=4; j++){
        for(i=1; i<=7; i++){
        // Draw a line
	glBegin(GL_TRIANGLES);
		glVertex2i(20+x, 150+y);
        glVertex2i(100+x, 80+y);
        glVertex2i(20+x, 80+y);
	glEnd();
	x+=80;
	//
    }
    x=0;
    y+=60;
    }
