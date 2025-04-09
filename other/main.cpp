#include <cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include<bits/stdc++.h>

bool day = true;
bool night = false;
bool isRain = false;
bool isStop = false;
bool isSound = false;


// void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
// {

//     glBegin(GL_TRIANGLE_FAN);
//     //glColor3f(1.0f, 0.0f, 0.0f);
//     glVertex2f(cx, cy);

//     for (int i = 0;i <= 100;i++)
//     {
//         float angle = 2.0f * 3.1416f * i / 100;

//         float x = rx * cosf(angle);
//         float y = ry * sinf(angle);

//         glVertex2f((x + cx), (y + cy));
//     }
//     glEnd();

// }

void soundCar() {
    PlaySound("car.wav", NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
}

void soundRain() {
    PlaySound("rain.wav", NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
}

void soundNull() {
    PlaySound(NULL, 0, 0);
}

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1000.0, 0.0, 800.0);
}

float p = 40;
void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy) {
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 100; i++) {
        float angle = 2 * 3.1416 * i / 100;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}

float r = 0;
float q = 0;
float c = 0;
void cloud() {
    //CLOUD-1
    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 400, 700);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 430, 700);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 460, 700);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 490, 700);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 420, 720);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 450, 720);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 470, 720);

    //CLOUD-6
    glColor3f(0.9, 0.9, 0.9);
    circle(20, 20, r + 150, 730);

    glColor3f(0.9, 0.9, 0.9);
    circle(20, 20, r + 180, 730);

    glColor3f(0.9, 0.9, 0.9);
    circle(20, 20, r + 210, 730);

    glColor3f(0.9, 0.9, 0.9);
    circle(20, 20, r + 240, 730);

    glColor3f(0.9, 0.9, 0.9);
    circle(20, 20, r + 160, 750);

    glColor3f(0.9, 0.9, 0.9);
    circle(20, 20, r + 190, 750);

    glColor3f(0.9, 0.9, 0.9);
    circle(20, 20, r + 220, 750);

    //CLOUD-2
    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 200, 700);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 230, 700);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 260, 700);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 290, 700);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 220, 720);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 250, 720);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 270, 720);

    //CLOUD-3
    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 230, 540);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 260, 540);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 290, 540);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 320, 540);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 240, 560);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 270, 560);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 300, 560);


    //CLOUD-4
    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 650, 570);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 680, 570);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 710, 570);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 740, 570);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 670, 590);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 690, 590);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 720, 590);

    //CLOUD-5
    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 760, 670);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 790, 670);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 820, 670);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 850, 670);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 880, 670);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 780, 690);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 810, 690);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 830, 690);

    glColor3f(0.94, 0.93, 0.92);
    circle(20, 20, r + 860, 690);
}

void sky()
{

    //background-1
    glBegin(GL_POLYGON);
    glColor3f(0.53, 0.91, 0.94);
    glVertex2i(0, 250);
    glVertex2i(0, 800);
    glVertex2i(1000, 800);
    glVertex2i(1000, 250);
    glEnd();

}
void sky1()
{
    //background-1
    glBegin(GL_POLYGON);
    glColor3f(0.01, 0.17, 0.17);
    glVertex2i(0, 250);
    glVertex2i(0, 800);
    glVertex2i(1000, 800);
    glVertex2i(1000, 250);
    glEnd();
}


void road() {
    //background-3
    glBegin(GL_POLYGON);
    glColor3f(0.73, 0.74, 0.73);
    glVertex2i(0, 250);
    glVertex2i(0, 50);
    glVertex2i(1000, 50);
    glVertex2i(1000, 250);
    glEnd();

    //background-2
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(0, 250);
    glVertex2i(0, 220);
    glVertex2i(1000, 220);
    glVertex2i(1000, 250);
    glEnd();

    //background-4
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(0, 250);
    glVertex2i(0, 240);
    glVertex2i(1000, 240);
    glVertex2i(1000, 250);
    glEnd();

    //background-5
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(0, 50);
    glVertex2i(0, 0);
    glVertex2i(1000, 0);
    glVertex2i(1000, 50);
    glEnd();

    //box-1
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(0, 50);
    glVertex2i(0, 40);
    glVertex2i(50, 40);
    glVertex2i(50, 50);
    glEnd();

    //box-2
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(100, 50);
    glVertex2i(100, 40);
    glVertex2i(150, 40);
    glVertex2i(150, 50);
    glEnd();

    //box-3
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(200, 50);
    glVertex2i(200, 40);
    glVertex2i(250, 40);
    glVertex2i(250, 50);
    glEnd();

    //box-4
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(300, 50);
    glVertex2i(300, 40);
    glVertex2i(350, 40);
    glVertex2i(350, 50);
    glEnd();

    //box-5
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(400, 50);
    glVertex2i(400, 40);
    glVertex2i(450, 40);
    glVertex2i(450, 50);
    glEnd();

    //box-6
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(500, 50);
    glVertex2i(500, 40);
    glVertex2i(550, 40);
    glVertex2i(550, 50);
    glEnd();

    //box-7
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(600, 50);
    glVertex2i(600, 40);
    glVertex2i(650, 40);
    glVertex2i(650, 50);
    glEnd();

    //box-8
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(700, 50);
    glVertex2i(700, 40);
    glVertex2i(750, 40);
    glVertex2i(750, 50);
    glEnd();

    //box-9
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(800, 50);
    glVertex2i(800, 40);
    glVertex2i(850, 40);
    glVertex2i(850, 50);
    glEnd();

    //box-10
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(900, 50);
    glVertex2i(900, 40);
    glVertex2i(950, 40);
    glVertex2i(950, 50);
    glEnd();

    //box-11
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(0, 250);
    glVertex2i(0, 220);
    glVertex2i(50, 220);
    glVertex2i(50, 250);
    glEnd();

    //box-12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(100, 250);
    glVertex2i(100, 220);
    glVertex2i(150, 220);
    glVertex2i(150, 250);
    glEnd();

    //box-12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(200, 250);
    glVertex2i(200, 220);
    glVertex2i(250, 220);
    glVertex2i(250, 250);
    glEnd();

    //box-12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(300, 250);
    glVertex2i(300, 220);
    glVertex2i(350, 220);
    glVertex2i(350, 250);
    glEnd();

    //box-12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(400, 250);
    glVertex2i(400, 220);
    glVertex2i(450, 220);
    glVertex2i(450, 250);
    glEnd();

    //box-12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(500, 250);
    glVertex2i(500, 220);
    glVertex2i(550, 220);
    glVertex2i(550, 250);
    glEnd();

    //box-12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(600, 250);
    glVertex2i(600, 220);
    glVertex2i(650, 220);
    glVertex2i(650, 250);
    glEnd();

    //box-12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(700, 250);
    glVertex2i(700, 220);
    glVertex2i(750, 220);
    glVertex2i(750, 250);
    glEnd();

    //box-12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(800, 250);
    glVertex2i(800, 220);
    glVertex2i(850, 220);
    glVertex2i(850, 250);
    glEnd();

    //box-12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(900, 250);
    glVertex2i(900, 220);
    glVertex2i(950, 220);
    glVertex2i(950, 250);
    glEnd();

    //background-6
    glBegin(GL_POLYGON);
    glColor3f(0.9, 0.9, 0.7);
    glVertex2i(0, 40);
    glVertex2i(0, 0);
    glVertex2i(1000, 0);
    glVertex2i(1000, 40);
    glEnd();
    //R0de-line-1
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(90, 150);
    glVertex2i(100, 130);
    glVertex2i(180, 130);
    glVertex2i(170, 150);
    glEnd();

    //R0de-line-2
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(250, 150);
    glVertex2i(260, 130);
    glVertex2i(330, 130);
    glVertex2i(320, 150);
    glEnd();

    //R0de-line-3
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(390, 150);
    glVertex2i(400, 130);
    glVertex2i(490, 130);
    glVertex2i(480, 150);
    glEnd();

    //R0de-line-4
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(590, 150);
    glVertex2i(600, 130);
    glVertex2i(690, 130);
    glVertex2i(680, 150);
    glEnd();

    //R0de-line-5
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(790, 150);
    glVertex2i(800, 130);
    glVertex2i(890, 130);
    glVertex2i(880, 150);
    glEnd();

    //R0de-line-6
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(980, 150);
    glVertex2i(990, 130);
    glVertex2i(1080, 130);
    glVertex2i(1070, 150);
    glEnd();




    //zip line-1
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(0, 210);
    glVertex2i(80, 210);
    glVertex2i(80, 180);
    glVertex2i(0, 180);
    glEnd();

    //zip line-2
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(0, 170);
    glVertex2i(80, 170);
    glVertex2i(80, 140);
    glVertex2i(0, 140);
    glEnd();

    //zip line-3
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(0, 130);
    glVertex2i(80, 130);
    glVertex2i(80, 100);
    glVertex2i(0, 100);
    glEnd();

    //zip line-4
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(0, 90);
    glVertex2i(80, 90);
    glVertex2i(80, 60);
    glVertex2i(0, 60);
    glEnd();

}

void road1() {
    //background-3
    glBegin(GL_POLYGON);
    glColor3f(0.13, 0.18, 0.18);
    glVertex2i(0, 250);
    glVertex2i(0, 50);
    glVertex2i(1000, 50);
    glVertex2i(1000, 250);
    glEnd();

    //background-2
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(0, 250);
    glVertex2i(0, 220);
    glVertex2i(1000, 220);
    glVertex2i(1000, 250);
    glEnd();

    //background-4
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(0, 250);
    glVertex2i(0, 240);
    glVertex2i(1000, 240);
    glVertex2i(1000, 250);
    glEnd();

    //background-5
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(0, 50);
    glVertex2i(0, 0);
    glVertex2i(1000, 0);
    glVertex2i(1000, 50);
    glEnd();

    //background-6
    glBegin(GL_POLYGON);
    glColor3f(0.01, 0.17, 0.17);
    glVertex2i(0, 40);
    glVertex2i(0, 0);
    glVertex2i(1000, 0);
    glVertex2i(1000, 40);
    glEnd();

    //box-1
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(0, 50);
    glVertex2i(0, 40);
    glVertex2i(50, 40);
    glVertex2i(50, 50);
    glEnd();

    //box-2
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(100, 50);
    glVertex2i(100, 40);
    glVertex2i(150, 40);
    glVertex2i(150, 50);
    glEnd();

    //box-3
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(200, 50);
    glVertex2i(200, 40);
    glVertex2i(250, 40);
    glVertex2i(250, 50);
    glEnd();

    //box-4
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(300, 50);
    glVertex2i(300, 40);
    glVertex2i(350, 40);
    glVertex2i(350, 50);
    glEnd();

    //box-5
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(400, 50);
    glVertex2i(400, 40);
    glVertex2i(450, 40);
    glVertex2i(450, 50);
    glEnd();

    //box-6
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(500, 50);
    glVertex2i(500, 40);
    glVertex2i(550, 40);
    glVertex2i(550, 50);
    glEnd();

    //box-7
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(600, 50);
    glVertex2i(600, 40);
    glVertex2i(650, 40);
    glVertex2i(650, 50);
    glEnd();

    //box-8
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(700, 50);
    glVertex2i(700, 40);
    glVertex2i(750, 40);
    glVertex2i(750, 50);
    glEnd();

    //box-9
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(800, 50);
    glVertex2i(800, 40);
    glVertex2i(850, 40);
    glVertex2i(850, 50);
    glEnd();

    //box-10
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(900, 50);
    glVertex2i(900, 40);
    glVertex2i(950, 40);
    glVertex2i(950, 50);
    glEnd();

    //box-11
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(0, 250);
    glVertex2i(0, 220);
    glVertex2i(50, 220);
    glVertex2i(50, 250);
    glEnd();

    //box-12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(100, 250);
    glVertex2i(100, 220);
    glVertex2i(150, 220);
    glVertex2i(150, 250);
    glEnd();

    //box-12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(200, 250);
    glVertex2i(200, 220);
    glVertex2i(250, 220);
    glVertex2i(250, 250);
    glEnd();

    //box-12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(300, 250);
    glVertex2i(300, 220);
    glVertex2i(350, 220);
    glVertex2i(350, 250);
    glEnd();

    //box-12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(400, 250);
    glVertex2i(400, 220);
    glVertex2i(450, 220);
    glVertex2i(450, 250);
    glEnd();

    //box-12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(500, 250);
    glVertex2i(500, 220);
    glVertex2i(550, 220);
    glVertex2i(550, 250);
    glEnd();

    //box-12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(600, 250);
    glVertex2i(600, 220);
    glVertex2i(650, 220);
    glVertex2i(650, 250);
    glEnd();

    //box-12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(700, 250);
    glVertex2i(700, 220);
    glVertex2i(750, 220);
    glVertex2i(750, 250);
    glEnd();

    //box-12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(800, 250);
    glVertex2i(800, 220);
    glVertex2i(850, 220);
    glVertex2i(850, 250);
    glEnd();

    //box-12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(900, 250);
    glVertex2i(900, 220);
    glVertex2i(950, 220);
    glVertex2i(950, 250);
    glEnd();

    //R0de-line-1
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(90, 150);
    glVertex2i(100, 130);
    glVertex2i(180, 130);
    glVertex2i(170, 150);
    glEnd();

    //R0de-line-2
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(250, 150);
    glVertex2i(260, 130);
    glVertex2i(330, 130);
    glVertex2i(320, 150);
    glEnd();

    //R0de-line-3
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(390, 150);
    glVertex2i(400, 130);
    glVertex2i(490, 130);
    glVertex2i(480, 150);
    glEnd();

    //R0de-line-4
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(590, 150);
    glVertex2i(600, 130);
    glVertex2i(690, 130);
    glVertex2i(680, 150);
    glEnd();

    //R0de-line-5
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(790, 150);
    glVertex2i(800, 130);
    glVertex2i(890, 130);
    glVertex2i(880, 150);
    glEnd();

    //R0de-line-6
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(980, 150);
    glVertex2i(990, 130);
    glVertex2i(1080, 130);
    glVertex2i(1070, 150);
    glEnd();




    //zip line-1
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(0, 210);
    glVertex2i(80, 210);
    glVertex2i(80, 180);
    glVertex2i(0, 180);
    glEnd();

    //zip line-2
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(0, 170);
    glVertex2i(80, 170);
    glVertex2i(80, 140);
    glVertex2i(0, 140);
    glEnd();

    //zip line-3
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(0, 130);
    glVertex2i(80, 130);
    glVertex2i(80, 100);
    glVertex2i(0, 100);
    glEnd();

    //zip line-4
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(0, 90);
    glVertex2i(80, 90);
    glVertex2i(80, 60);
    glVertex2i(0, 60);
    glEnd();

}


void traficLight() {
    //traffic light-1
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(20, 250);
    glVertex2i(20, 380);
    glVertex2i(30, 380);
    glVertex2i(30, 250);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(10, 310);
    glVertex2i(10, 370);
    glVertex2i(40, 370);
    glVertex2i(40, 310);
    glEnd();

    glColor3f(1, 0, 0);
    circle(5, 5, 30, 360);

    glColor3f(1, 1, 0);
    circle(5, 5, 30, 340);

    glColor3f(0, 1, 0);
    circle(5, 5, 30, 320);

    glColor3f(0.23, 0.24, 0.23);
    circle(5, 5, 20, 360);

    glColor3f(0.23, 0.24, 0.23);
    circle(5, 5, 20, 340);

    glColor3f(0.23, 0.24, 0.23);
    circle(5, 5, 20, 320);
}
void House()
{
    //house-1
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.9, 0.2);
    glVertex2i(50, 250);
    glVertex2i(50, 350);
    glVertex2i(100, 380);
    glVertex2i(150, 350);
    glVertex2i(150, 250);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(50, 250);
    glVertex2i(50, 350);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(50, 350);
    glVertex2i(100, 380);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(100, 380);
    glVertex2i(150, 350);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(150, 350);
    glVertex2i(150, 250);
    glEnd();




    glBegin(GL_POLYGON);
    glColor3f(0.63, 0.2, 0.31);
    glVertex2i(50, 350);
    glVertex2i(50, 360);
    glVertex2i(100, 390);
    glVertex2i(100, 380);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.63, 0.2, 0.31);
    glVertex2i(100, 390);
    glVertex2i(100, 380);
    glVertex2i(150, 350);
    glVertex2i(150, 360);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(50, 350);
    glVertex2i(50, 360);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(50, 360);
    glVertex2i(100, 390);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(100, 390);
    glVertex2i(150, 360);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(150, 360);
    glVertex2i(150, 350);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(60, 260);
    glVertex2i(60, 290);
    glVertex2i(90, 290);
    glVertex2i(90, 260);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(70, 260);
    glVertex2i(70, 290);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(80, 260);
    glVertex2i(80, 290);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(110, 260);
    glVertex2i(110, 290);
    glVertex2i(140, 290);
    glVertex2i(140, 260);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(120, 260);
    glVertex2i(120, 290);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(130, 260);
    glVertex2i(130, 290);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(60, 310);
    glVertex2i(60, 340);
    glVertex2i(90, 340);
    glVertex2i(90, 310);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(70, 310);
    glVertex2i(70, 340);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(80, 310);
    glVertex2i(80, 340);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(110, 310);
    glVertex2i(110, 340);
    glVertex2i(140, 340);
    glVertex2i(140, 310);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(120, 310);
    glVertex2i(120, 340);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(130, 310);
    glVertex2i(130, 340);
    glEnd();



    //HOUSE-3
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.6, 0.5);
    glVertex2i(230, 500);
    glVertex2i(270, 560);
    glVertex2i(310, 500);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.4, 0.7);
    glVertex2i(250, 250);
    glVertex2i(250, 500);
    glVertex2i(300, 500);
    glVertex2i(300, 250);
    glEnd();

    glColor3f(0.94, 0.93, 0.92);
    circle(10, 20, 270, 470);

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(270, 470);
    glVertex2i(270, 480);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(270, 470);
    glVertex2i(260, 470);
    glEnd();

    //WINDOW-1
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(260, 380);
    glVertex2i(260, 430);
    glVertex2i(280, 430);
    glVertex2i(280, 380);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(270, 380);
    glVertex2i(270, 430);
    glEnd();

    //WINDOW-1
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(260, 280);
    glVertex2i(260, 330);
    glVertex2i(280, 330);
    glVertex2i(280, 280);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(270, 280);
    glVertex2i(270, 330);
    glEnd();

    //HOUSE-2
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2i(130, 500);
    glVertex2i(170, 550);
    glVertex2i(230, 550);
    glVertex2i(270, 500);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(150, 500);
    glVertex2i(250, 500);
    glVertex2i(250, 250);
    glVertex2i(150, 250);
    glEnd();

    //WINDOW-1
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(160, 420);
    glVertex2i(160, 480);
    glVertex2i(190, 480);
    glVertex2i(190, 420);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(170, 420);
    glVertex2i(170, 480);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(180, 420);
    glVertex2i(180, 480);
    glEnd();

    //WINDOW-2
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(210, 420);
    glVertex2i(210, 480);
    glVertex2i(240, 480);
    glVertex2i(240, 420);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(220, 420);
    glVertex2i(220, 480);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(230, 420);
    glVertex2i(230, 480);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(150, 400);
    glVertex2i(250, 400);
    glEnd();

    //WINDOW-3
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(160, 320);
    glVertex2i(160, 380);
    glVertex2i(190, 380);
    glVertex2i(190, 320);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(170, 320);
    glVertex2i(170, 380);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(180, 320);
    glVertex2i(180, 380);
    glEnd();

    //WINDOW-4
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(210, 320);
    glVertex2i(210, 380);
    glVertex2i(240, 380);
    glVertex2i(240, 320);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(220, 320);
    glVertex2i(220, 380);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(230, 320);
    glVertex2i(230, 380);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.01, 0.22, 0.22);
    glVertex2i(150, 290);
    glVertex2i(150, 310);
    glVertex2i(250, 310);
    glVertex2i(270, 290);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(160, 260);
    glVertex2i(160, 290);
    glVertex2i(180, 290);
    glVertex2i(180, 260);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.01, 0.22, 0.22);
    glVertex2i(150, 260);
    glVertex2i(190, 260);
    glVertex2i(190, 250);
    glVertex2i(150, 250);
    glEnd();



    //house-5
    glBegin(GL_POLYGON);
    glColor3f(0.12, 0.78, 0.79);
    glVertex2i(500, 250);
    glVertex2i(500, 600);
    glVertex2i(680, 600);
    glVertex2i(680, 250);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.06, 0.6, 0.61);
    glVertex2i(500, 600);
    glVertex2i(520, 620);
    glVertex2i(700, 620);
    glVertex2i(680, 600);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.06, 0.6, 0.61);
    glVertex2i(680, 250);
    glVertex2i(680, 600);
    glVertex2i(700, 620);
    glVertex2i(700, 250);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(680, 600);
    glVertex2i(700, 620);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(500, 250);
    glVertex2i(500, 600);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(500, 600);
    glVertex2i(680, 600);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(680, 600);
    glVertex2i(680, 250);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(500, 600);
    glVertex2i(520, 620);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(520, 620);
    glVertex2i(700, 620);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(700, 620);
    glVertex2i(680, 600);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(700, 620);
    glVertex2i(700, 250);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(500, 500);
    glVertex2i(680, 500);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(680, 500);
    glVertex2i(700, 520);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(500, 400);
    glVertex2i(680, 400);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(680, 400);
    glVertex2i(700, 420);
    glEnd();

    //WINDOW-1
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(520, 520);
    glVertex2i(520, 580);
    glVertex2i(580, 580);
    glVertex2i(580, 520);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(550, 520);
    glVertex2i(550, 580);
    glEnd();

    //WINDOW-2
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(600, 520);
    glVertex2i(600, 580);
    glVertex2i(660, 580);
    glVertex2i(660, 520);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(630, 520);
    glVertex2i(630, 580);
    glEnd();

    //WINDOW-3
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(520, 420);
    glVertex2i(520, 480);
    glVertex2i(580, 480);
    glVertex2i(580, 420);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(550, 420);
    glVertex2i(550, 480);
    glEnd();

    //WINDOW-4
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(600, 420);
    glVertex2i(600, 480);
    glVertex2i(660, 480);
    glVertex2i(660, 420);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(630, 420);
    glVertex2i(630, 480);
    glEnd();

    //WINDOW-5
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(520, 320);
    glVertex2i(520, 380);
    glVertex2i(580, 380);
    glVertex2i(580, 320);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(550, 320);
    glVertex2i(550, 380);
    glEnd();

    //WINDOW-6
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(600, 320);
    glVertex2i(600, 380);
    glVertex2i(660, 380);
    glVertex2i(660, 320);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(630, 320);
    glVertex2i(630, 380);
    glEnd();




    //house-6
    glBegin(GL_POLYGON);
    glColor3f(0.11, 0.59, 0.45);
    glVertex2i(550, 250);
    glVertex2i(550, 320);
    glVertex2i(620, 400);
    glVertex2i(700, 320);
    glVertex2i(700, 250);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(550, 250);
    glVertex2i(550, 320);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(550, 320);
    glVertex2i(620, 400);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(620, 400);
    glVertex2i(700, 320);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(700, 320);
    glVertex2i(700, 250);
    glEnd();

    glColor3f(1, 0.94, 0.63);
    circle(10, 20, 620, 360);

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(610, 360);
    glVertex2i(630, 360);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(620, 380);
    glVertex2i(620, 340);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(570, 270);
    glVertex2i(570, 300);
    glVertex2i(610, 300);
    glVertex2i(610, 270);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(590, 270);
    glVertex2i(590, 300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(640, 270);
    glVertex2i(640, 300);
    glVertex2i(680, 300);
    glVertex2i(680, 270);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(660, 270);
    glVertex2i(660, 300);
    glEnd();


    //house-4
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.9, 0.2);
    glVertex2i(290, 400);
    glVertex2i(340, 450);
    glVertex2i(510, 450);
    glVertex2i(560, 400);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(150, 111, 51);
    glVertex2i(340, 450);
    glVertex2i(340, 700);
    glVertex2i(345, 700);
    glVertex2i(345, 450);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(11, 102, 35);

    glVertex2i(345, 700);
    glVertex2i(430, 700);
    glVertex2i(430, 650);
    glVertex2i(345, 650);

    glEnd();

    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
    circle(17, 17, 390, 675);








    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2i(300, 250);
    glVertex2i(300, 400);
    glVertex2i(550, 400);
    glVertex2i(550, 250);
    glEnd();

    //WINDOW-1
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(320, 350);
    glVertex2i(320, 390);
    glVertex2i(380, 390);
    glVertex2i(380, 350);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(350, 350);
    glVertex2i(350, 390);
    glEnd();

    //WINDOW-2
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(470, 350);
    glVertex2i(470, 390);
    glVertex2i(530, 390);
    glVertex2i(530, 350);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(500, 350);
    glVertex2i(500, 390);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(300, 340);
    glVertex2i(550, 340);
    glEnd();

    //WINDOW-3
    glBegin(GL_POLYGON);
    glColor3f(0.47, 0.2, 0.09);
    glVertex2i(280, 300);
    glVertex2i(300, 320);
    glVertex2i(400, 320);
    glVertex2i(420, 300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(310, 260);
    glVertex2i(310, 300);
    glVertex2i(390, 300);
    glVertex2i(390, 260);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(350, 260);
    glVertex2i(350, 300);
    glEnd();



    //WINDOW-4
    glBegin(GL_POLYGON);
    glColor3f(0.47, 0.2, 0.09);
    glVertex2i(430, 300);
    glVertex2i(450, 320);
    glVertex2i(550, 320);
    glVertex2i(570, 300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(460, 260);
    glVertex2i(460, 300);
    glVertex2i(540, 300);
    glVertex2i(540, 260);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(500, 260);
    glVertex2i(500, 300);
    glEnd();


    //house-7
    glBegin(GL_POLYGON);
    glColor3ub(255, 165, 0);
    glVertex2i(700, 250);
    glVertex2i(700, 560);
    glVertex2i(900, 560);
    glVertex2i(900, 250);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 165, 0);
    glVertex2i(700, 560);
    glVertex2i(720, 580);
    glVertex2i(920, 580);
    glVertex2i(900, 560);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 165, 0);
    glVertex2i(900, 250);
    glVertex2i(900, 560);
    glVertex2i(920, 580);
    glVertex2i(920, 250);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(900, 560);
    glVertex2i(920, 580);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(700, 250);
    glVertex2i(700, 560);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(700, 560);
    glVertex2i(720, 580);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(720, 580);
    glVertex2i(920, 580);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(920, 580);
    glVertex2i(920, 250);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(700, 560);
    glVertex2i(900, 560);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(900, 560);
    glVertex2i(900, 250);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(700, 460);
    glVertex2i(900, 460);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(900, 460);
    glVertex2i(920, 480);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(900, 360);
    glVertex2i(920, 380);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(700, 360);
    glVertex2i(900, 360);
    glEnd();


    //WINDOW-1
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(720, 480);
    glVertex2i(720, 540);
    glVertex2i(780, 540);
    glVertex2i(780, 480);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(750, 480);
    glVertex2i(750, 540);
    glEnd();

    //WINDOW-2
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(820, 480);
    glVertex2i(820, 540);
    glVertex2i(880, 540);
    glVertex2i(880, 480);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(850, 480);
    glVertex2i(850, 540);
    glEnd();

    //WINDOW-3
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(720, 380);
    glVertex2i(720, 440);
    glVertex2i(780, 440);
    glVertex2i(780, 380);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(750, 380);
    glVertex2i(750, 440);
    glEnd();

    //WINDOW-4
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(820, 380);
    glVertex2i(820, 440);
    glVertex2i(880, 440);
    glVertex2i(880, 380);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(850, 380);
    glVertex2i(850, 440);
    glEnd();

    //WINDOW-5
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(720, 280);
    glVertex2i(720, 340);
    glVertex2i(780, 340);
    glVertex2i(780, 280);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(750, 280);
    glVertex2i(750, 340);
    glEnd();

    //WINDOW-6
    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(820, 280);
    glVertex2i(820, 340);
    glVertex2i(880, 340);
    glVertex2i(880, 280);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(850, 280);
    glVertex2i(850, 340);
    glEnd();


    //house-8
    glBegin(GL_POLYGON);
    glColor3f(0.75, 0.39, 0.25);
    glVertex2i(900, 250);
    glVertex2i(900, 350);
    glVertex2i(950, 380);
    glVertex2i(1000, 350);
    glVertex2i(1000, 250);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(900, 250);
    glVertex2i(900, 350);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(900, 350);
    glVertex2i(950, 380);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(950, 380);
    glVertex2i(1000, 350);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(1000, 350);
    glVertex2i(1000, 250);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(910, 260);
    glVertex2i(910, 290);
    glVertex2i(940, 290);
    glVertex2i(940, 260);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(920, 260);
    glVertex2i(920, 290);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(930, 260);
    glVertex2i(930, 290);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(960, 260);
    glVertex2i(960, 290);
    glVertex2i(990, 290);
    glVertex2i(990, 260);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(970, 260);
    glVertex2i(970, 290);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(980, 260);
    glVertex2i(980, 290);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(910, 310);
    glVertex2i(910, 340);
    glVertex2i(940, 340);
    glVertex2i(940, 310);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(920, 310);
    glVertex2i(920, 340);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(930, 310);
    glVertex2i(930, 340);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1, 0.94, 0.63);
    glVertex2i(960, 310);
    glVertex2i(960, 340);
    glVertex2i(990, 340);
    glVertex2i(990, 310);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(970, 310);
    glVertex2i(970, 340);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(980, 310);
    glVertex2i(980, 340);
    glEnd();

}
void car() {
    //CAR-1
    glBegin(GL_POLYGON);
    glColor3f(0.01, 0.35, 0.35);
    glVertex2i(q + 130, 150);
    glVertex2i(q + 130, 190);
    glVertex2i(q + 220, 180);
    glVertex2i(q + 210, 150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.01, 0.35, 0.35);
    glVertex2i(q + 140, 180);
    glVertex2i(q + 150, 210);
    glVertex2i(q + 190, 210);
    glVertex2i(q + 200, 180);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(q + 150, 180);
    glVertex2i(q + 160, 200);
    glVertex2i(q + 180, 200);
    glVertex2i(q + 190, 180);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.01, 0.35, 0.35);
    glVertex2i(q + 170, 180);
    glVertex2i(q + 170, 200);
    glEnd();

    glColor3f(0, 0, 0);
    circle(10, 10, q + 150, 150);

    glColor3f(0, 0, 0);
    circle(10, 10, q + 190, 150);

    //CAR-2
    glBegin(GL_POLYGON);
    glColor3f(0.01, 0.26, 0.03);
    glVertex2i(q + 490, 150);
    glVertex2i(q + 490, 190);
    glVertex2i(q + 580, 180);
    glVertex2i(q + 570, 150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.01, 0.26, 0.03);
    glVertex2i(q + 500, 180);
    glVertex2i(q + 510, 210);
    glVertex2i(q + 550, 210);
    glVertex2i(q + 560, 180);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(q + 510, 180);
    glVertex2i(q + 520, 200);
    glVertex2i(q + 540, 200);
    glVertex2i(q + 550, 180);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.01, 0.35, 0.35);
    glVertex2i(q + 530, 180);
    glVertex2i(q + 530, 200);
    glEnd();

    glColor3f(0, 0, 0);
    circle(10, 10, q + 550, 150);

    glColor3f(0, 0, 0);
    circle(10, 10, q + 510, 150);

    //CAR-3
    glBegin(GL_POLYGON);
    glColor3f(0.01, 0.35, 0.35);
    glVertex2i(c + 630, 70);
    glVertex2i(c + 630, 110);
    glVertex2i(c + 660, 140);
    glVertex2i(c + 750, 140);
    glVertex2i(c + 750, 70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(c + 670, 110);
    glVertex2i(c + 670, 130);
    glVertex2i(c + 700, 130);
    glVertex2i(c + 700, 110);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(c + 710, 110);
    glVertex2i(c + 710, 130);
    glVertex2i(c + 740, 130);
    glVertex2i(c + 740, 110);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(c + 630, 110);
    glVertex2i(c + 660, 140);
    glVertex2i(c + 660, 110);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.19, 0.18, 0.16);
    glVertex2i(c + 650, 70);
    glVertex2i(c + 650, 110);
    glVertex2i(c + 660, 110);
    glVertex2i(c + 660, 70);
    glEnd();


    glColor3f(0, 0, 0);
    circle(10, 10, c + 660, 70);

    glColor3f(0, 0, 0);
    circle(10, 10, c + 720, 70);

    //CAR-4
    glBegin(GL_POLYGON);
    glColor3f(0.94, 0.54, 0.03);
    glVertex2i(c + 330, 70);
    glVertex2i(c + 330, 110);
    glVertex2i(c + 360, 140);
    glVertex2i(c + 450, 140);
    glVertex2i(c + 450, 70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(c + 370, 110);
    glVertex2i(c + 370, 130);
    glVertex2i(c + 400, 130);
    glVertex2i(c + 400, 110);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(c + 410, 110);
    glVertex2i(c + 410, 130);
    glVertex2i(c + 440, 130);
    glVertex2i(c + 440, 110);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(c + 330, 110);
    glVertex2i(c + 360, 140);
    glVertex2i(c + 360, 110);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.19, 0.18, 0.16);
    glVertex2i(c + 350, 70);
    glVertex2i(c + 350, 110);
    glVertex2i(c + 360, 110);
    glVertex2i(c + 360, 70);
    glEnd();


    glColor3f(0, 0, 0);
    circle(10, 10, c + 360, 70);

    glColor3f(0, 0, 0);
    circle(10, 10, c + 420, 70);
}
void light() {

    //light-1
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(200, 50);
    glVertex2i(200, 100);
    glVertex2i(210, 100);
    glVertex2i(210, 50);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(200, 80);
    glVertex2i(180, 80);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(180, 80);
    glVertex2i(180, 90);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(200, 80);
    glVertex2i(230, 80);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(230, 80);
    glVertex2i(230, 90);
    glEnd();

    //light-2
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(500, 50);
    glVertex2i(500, 100);
    glVertex2i(510, 100);
    glVertex2i(510, 50);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(500, 80);
    glVertex2i(480, 80);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(480, 80);
    glVertex2i(480, 90);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(500, 80);
    glVertex2i(530, 80);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(530, 80);
    glVertex2i(530, 90);
    glEnd();

    //light-3
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(800, 50);
    glVertex2i(800, 100);
    glVertex2i(810, 100);
    glVertex2i(810, 50);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(800, 80);
    glVertex2i(780, 80);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(780, 80);
    glVertex2i(780, 90);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(800, 80);
    glVertex2i(830, 80);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(830, 80);
    glVertex2i(830, 90);
    glEnd();

    //R0de-lineC-1
    glColor3f(1, 1, 0);
    circle(10, 10, 180, 100);

    glColor3f(1, 1, 0);
    circle(10, 10, 210, 110);

    glColor3f(1, 1, 0);
    circle(10, 10, 200, 110);

    glColor3f(1, 1, 0);
    circle(10, 10, 230, 100);

    //R0de-lineC-2
    glColor3f(1, 1, 0);
    circle(10, 10, 480, 100);

    glColor3f(1, 1, 0);
    circle(10, 10, 510, 110);

    glColor3f(1, 1, 0);
    circle(10, 10, 500, 110);

    glColor3f(1, 1, 0);
    circle(10, 10, 530, 100);

    //R0de-lineC-3
    glColor3f(1, 1, 0);
    circle(10, 10, 780, 100);

    glColor3f(1, 1, 0);
    circle(10, 10, 810, 110);

    glColor3f(1, 1, 0);
    circle(10, 10, 800, 110);

    glColor3f(1, 1, 0);
    circle(10, 10, 830, 100);

    //traffic light-2
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(30, 40);
    glVertex2i(30, 170);
    glVertex2i(40, 170);
    glVertex2i(40, 40);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(20, 160);
    glVertex2i(50, 160);
    glVertex2i(50, 90);
    glVertex2i(20, 90);
    glEnd();
}

void sun()
{
    //SUN-1
    glColor3f(0.97, 0.46, 0.02);
    circle(40, 60, 850, 700);
}

void moon()
{
    glColor3f(0.85, 0.86, 0.86);
    circle(40, 60, 850, 750);

    glColor3f(0.01, 0.17, 0.17);
    circle(40, 60, 850, 770);


}

GLfloat rainMovX = 0.0f;
GLfloat rainMovY = 0.0f;

void rain() {

    int i = 0;
    int j = 0;
    float x, y;
    x = 1000.0f;
    y = 800.0f;
    while (j <= 800) {//Y-axis
        x = 0.0f;
        while (i <= 1000) {//X-axis
            glBegin(GL_LINES);
            glColor3f(0.313, 0.560, 0.713);
            glVertex2f(x, y);
            glVertex2f(x - 20.0f, y - 70.0f);
            glEnd();
            x += 30.0f;
            i++;
        }
        y -= 50.0f;
        j++;
        i = 0;
    }
}

bool Rain;
void Draw1() {
    glClear(GL_COLOR_BUFFER_BIT);
    sky1();
    moon();
    cloud();
    House();
    road1();
    car();
    light();
    traficLight();
    if (Rain)rain();

    if (r <= 1000)
        r = r + .05;
    else
        r = -800;

    if (q <= 1000)
        q = q + .5;
    else
        q = -800;

    if (c >= -800)
        c = c - .5;
    else
        c = 1000;

    glutPostRedisplay();
    glutSwapBuffers();
}

void Draw() {
    glClear(GL_COLOR_BUFFER_BIT);
    sky();
    sun();
    cloud();
    House();
    road();
    car();
    light();
    traficLight();
    if (Rain)rain();

    if (r <= 1000)
        r = r + .05;
    else
        r = -800;

    if (q <= 1000)
        q = q + 0.5;
    else
        q = -800;

    if (c >= -800)
        c = c - 0.5;
    else
        c = 1000;


    glutPostRedisplay();
    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y) {

    if (key == 'r') {
        Rain = true;
        PlaySound("rain.wav", NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
    }
    else if (key == 'o') {
        Rain = false;
        soundNull();
    }
    else if (key == 'n') {
        PlaySound("night.wav", NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
        glutDisplayFunc(Draw1);
        glutIdleFunc(Draw1);
    }
    else if (key == 'd') {
        soundNull();
        glutDisplayFunc(Draw);
        glutIdleFunc(Draw);
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(1500, 1500);
    glutCreateWindow("Lab Final_192-15-13134");
    init();
    glutDisplayFunc(Draw);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
