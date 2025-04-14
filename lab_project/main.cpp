#include<bits/stdc++.h>
#include<windows.h>
#include <GL/glut.h>
using namespace std;
int x, y, p;
bool isDay = true; // Default: Day

void init(void)
{
    if (isDay)
        glClearColor(0.698, 0.871, 0.941, 0.5); // Day: White
    else
        glClearColor(0.05f, 0.07f, 0.2f, 1.0f); // Night: Black

    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 1080, 0.0, 780.0);
}


void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_POLYGON);
    for (int i = 0; i <= 360; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f(cx + x, cy + y);
    }
    glEnd();
}

void crescent(float cx, float cy, float r)
{
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(r, r, cx, cy);

    glColor4f(0.05f, 0.07f, 0.2f, 1.0f);
    circle(r, r, cx, cy + r / 3.0);
}

void drawRoundedRect(int x, int y, int width, int height, int radius,float r, float g, float b)
{
    int numSegments = 20; // More segments = smoother curve
    float angle;

    glColor3f(r,g,b);

    // Center rectangle (without corners)
    glBegin(GL_POLYGON);
    glVertex2i(x + radius, y);
    glVertex2i(x + width - radius, y);
    glVertex2i(x + width, y + radius);
    glVertex2i(x + width, y + height - radius);
    glVertex2i(x + width - radius, y + height);
    glVertex2i(x + radius, y + height);
    glVertex2i(x, y + height - radius);
    glVertex2i(x, y + radius);
    glEnd();

    // Top-left corner
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(x + radius, y + height - radius);
    for (int i = 0; i <= numSegments; i++)
    {
        angle = M_PI + (M_PI / 2.0) * i / numSegments;
        glVertex2i(x + radius + radius * cos(angle), y + height - radius + radius * sin(angle));
    }
    glEnd();

    // Top-right corner
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(x + width - radius, y + height - radius);
    for (int i = 0; i <= numSegments; i++)
    {
        angle = 1.5 * M_PI + (M_PI / 2.0) * i / numSegments;
        glVertex2i(x + width - radius + radius * cos(angle), y + height - radius + radius * sin(angle));
    }
    glEnd();

    // Bottom-right corner
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(x + width - radius, y + radius);
    for (int i = 0; i <= numSegments; i++)
    {
        angle = 0 + (M_PI / 2.0) * i / numSegments;
        glVertex2i(x + width - radius + radius * cos(angle), y + radius + radius * sin(angle));
    }
    glEnd();

    // Bottom-left corner
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(x + radius, y + radius);
    for (int i = 0; i <= numSegments; i++)
    {
        angle = 0.5 * M_PI + (M_PI / 2.0) * i / numSegments;
        glVertex2i(x + radius + radius * cos(angle), y + radius + radius * sin(angle));
    }
    glEnd();
}

void building_window_color_house5()
{
    if(isDay)
        glColor3f(0, 0.761, 0.969);
    else
        glColor3f(0.988, 0.773, 0.165);
}
void house1()
{
    //quad -1
    glColor3f(0.627, 0.329, 0.196);
    glBegin(GL_POLYGON);
    glVertex2i(6, 300);
    glVertex2i(30, 300);
    glVertex2i(30, 450);
    glVertex2i(6, 468);
    glEnd();

    //quad -2
    glColor3f(0.78, 0.463, 0.286);
    glBegin(GL_POLYGON);
    glVertex2i(30, 300);
    glVertex2i(132, 300);
    glVertex2i(132, 450);
    glVertex2i(30, 450);
    glEnd();

    //quad -3
    glColor3f(0.627, 0.329, 0.196);
    glBegin(GL_POLYGON);
    glVertex2i(30, 450);
    glVertex2i(132, 450);
    glVertex2i(108, 468);
    glVertex2i(6, 468);
    glEnd();

    //windows
    for(int i = 0; i < 3; i++)
    {
        drawRoundedRect(48, 318 + (i * 48), 24, 24, 1,0, 0.761, 0.969);
        drawRoundedRect(96, 318 + (i * 48), 24, 24, 1,0, 0.761, 0.969);
        glEnd();

    }




}

void light_pole_between_h2_h3()
{
    glColor3f(0.431, 0.58, 0.612);
    glBegin(GL_POLYGON);
    glVertex2i(276, 300);
    glVertex2i(288, 300);
    glVertex2i(288, 402);
    glVertex2i(276, 402);
    glEnd();

    isDay ? glColor3f(0.85, 0.988, 1) : glColor3f(0.988, 0.773, 0.165);
    circle(16,18,282,420);

    glColor3f(0.431, 0.58, 0.612);
    glBegin(GL_POLYGON);
    glVertex2i(684, 300);
    glVertex2i(696, 300);
    glVertex2i(696, 402);
    glVertex2i(684, 402);
    glEnd();

    isDay ? glColor3f(0.85, 0.988, 1) : glColor3f(0.988, 0.773, 0.165);
    circle(16,18,690,420);
}

void traffic_light()
{
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(446, 270);
    glVertex2i(454, 270);
    glVertex2i(454, 324);
    glVertex2i(446, 324);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(440, 324);
    glVertex2i(460, 324);
    glVertex2i(460, 384);
    glVertex2i(440, 384);
    glEnd();

    glColor3f(1, 0, 0.0);
    circle(6,6,450, 372);
    glColor3f(0.922, 0.804, 0.059);
    circle(6,6,450, 354);
    glColor3f(0.0, 1, 0.0);
    circle(6,6,450, 336);
}


void house2()
{
    //quad -1
    glColor3f(0.722, 0.557, 0.043);
    glBegin(GL_POLYGON);
    glVertex2i(162, 300);
    glVertex2i(264, 300);
    glVertex2i(264, 342);
    glVertex2i(162, 342);
    glEnd();

    //quad-2:
    glColor3f(0.02, 0.471, 0.141);
    glBegin(GL_POLYGON);
    glVertex2i(156, 342);
    glVertex2i(270, 342);
    glVertex2i(270, 372);
    glVertex2i(156, 372);
    glEnd();

    glColor3f(0.722, 0.257, 0.043);
    circle(12,15,228,357);

    glColor3f(0, 0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(228, 366);
    glVertex2i(228, 348);
    glEnd();

    glColor3f(0, 0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(219, 357);
    glVertex2i(237, 357);
    glEnd();



    //windows---------------
    for(int i = 0; i < 2; i++)
    {
        drawRoundedRect(174 + (i * 30), 312, 18, 18, 1,0.722, 0.757, 0.743);
    }
    //door----------
    drawRoundedRect(236, 300, 18, 30, 1,0, 0.761, 0.969);
}

void house3()
{
    //quad -1
    glColor3f(0.122, 0.357, 0.743);
    glBegin(GL_POLYGON);
    glVertex2i(300, 300);
    glVertex2i(390, 300);
    glVertex2i(390, 372);
    glVertex2i(300, 372);
    glEnd();

    //quad-2:
    glColor3f(0.22, 0.353, 0.392);
    glBegin(GL_POLYGON);
    glVertex2i(282, 372);
    glVertex2i(408, 372);
    glVertex2i(390, 396);
    glVertex2i(300, 396);
    glEnd();

    for(int i = 0; i < 3; i++)
    {
        drawRoundedRect(306 + (i * 30), 342, 18, 18, 1,0.722, 0.757, 0.743);
        drawRoundedRect(306 + (i * 30), 312, 18, 18, 1,0.722, 0.757, 0.743);
    }
}

void house4()
{
    //quad -1
    glColor3f(1, 0.443, 0.369);
    glBegin(GL_POLYGON);
    glVertex2i(402, 300);
    glVertex2i(510, 300);
    glVertex2i(510, 420);
    glVertex2i(402, 420);
    glEnd();

    //quad-2:
    glColor3f(1, 0.616, 0.424);
    glBegin(GL_POLYGON);
    glVertex2i(384, 420);
    glVertex2i(528, 420);
    glVertex2i(504, 450);
    glVertex2i(408, 450);
    glEnd();

}

void house5()
{
    //quad -1
    glColor3f(0.22, 0.353, 0.392);
    glBegin(GL_POLYGON);
    glVertex2i(540, 300);
    glVertex2i(660, 300);
    glVertex2i(660, 540);
    glVertex2i(540, 540);
    glEnd();

    //quad-2:
    glColor3f(0.22, 0.353, 0.392);
    glBegin(GL_POLYGON);
    glVertex2i(552, 540);
    glVertex2i(648, 540);
    glVertex2i(648, 678);
    glVertex2i(552, 678);
    glEnd();

    //upper quad left section---------
    for(int i = 0; i < 5; i++)
    {
        building_window_color_house5();
        glBegin(GL_POLYGON);
        glVertex2i(558, 546 + (i * 24));
        glVertex2i(570, 546 + (i * 24));
        glVertex2i(570, 558 + (i * 24));
        glVertex2i(558, 558 + (i * 24));
        glEnd();

        building_window_color_house5();
        glBegin(GL_POLYGON);
        glVertex2i(576, 546 + (i * 24));
        glVertex2i(588, 546 + (i * 24));
        glVertex2i(588, 558 + (i * 24));
        glVertex2i(576, 558 + (i * 24));
        glEnd();
    }

    //upper quad middle line
    glColor3f(0.651, 0.647, 0.647);
    glBegin(GL_LINES);
    glVertex2i(594, 678);
    glVertex2i(594, 540);
    glEnd();

    //upper quad right section---------
    for(int i = 0; i < 5; i++)
    {
        building_window_color_house5();
        glBegin(GL_POLYGON);
        glVertex2i(600, 546 + (i * 24));
        glVertex2i(618, 546 + (i * 24));
        glVertex2i(618, 558 + (i * 24));
        glVertex2i(600, 558 + (i * 24));
        glEnd();

        building_window_color_house5();
        glBegin(GL_POLYGON);
        glVertex2i(624, 546 + (i * 24));
        glVertex2i(642, 546 + (i * 24));
        glVertex2i(642, 558 + (i * 24));
        glVertex2i(624, 558 + (i * 24));
        glEnd();
    }


    //lower quad left section
    for(int i = 0; i < 5; i++)
    {
        building_window_color_house5();
        glBegin(GL_POLYGON);
        glVertex2i(552, 342 + (i * 42));
        glVertex2i(564, 342 + (i * 42));
        glVertex2i(564, 366 + (i * 42));
        glVertex2i(552, 366 + (i * 42));
        glEnd();
    }

    //lower quad right section
    for(int i = 0; i < 8; i++)
    {
        building_window_color_house5();
        glBegin(GL_POLYGON);
        glVertex2i(582, 354 + (i * 24));
        glVertex2i(600, 354 + (i * 24));
        glVertex2i(600, 366 + (i * 24));
        glVertex2i(582, 366 + (i * 24));
        glEnd();

        building_window_color_house5();
        glBegin(GL_POLYGON);
        glVertex2i(612, 354 + (i * 24));
        glVertex2i(630, 354 + (i * 24));
        glVertex2i(630, 366 + (i * 24));
        glVertex2i(612, 366 + (i * 24));
        glEnd();

        building_window_color_house5();
        glBegin(GL_POLYGON);
        glVertex2i(642, 354 + (i * 24));
        glVertex2i(654, 354 + (i * 24));
        glVertex2i(654, 366 + (i * 24));
        glVertex2i(642, 366 + (i * 24));
        glEnd();
    }

    // Door
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(600, 300);
    glVertex2i(630, 300);
    glVertex2i(630, 342);
    glVertex2i(600, 342);
    glEnd();

    //lower quad middle line
    glColor3f(0.651, 0.647, 0.647);
    glBegin(GL_LINES);
    glVertex2i(576, 300);
    glVertex2i(576, 540);
    glEnd();

}

void house6()
{
    //quad -1
    glColor3f(0.78, 0.463, 0.286);
    glBegin(GL_POLYGON);
    glVertex2i(720, 300);
    glVertex2i(834, 300);
    glVertex2i(834, 480);
    glVertex2i(720, 480);
    glEnd();

    //quad-2:
    glColor3f(0.627, 0.329, 0.196);
    glBegin(GL_POLYGON);
    glVertex2i(834, 300);
    glVertex2i(852, 300);
    glVertex2i(852, 498);
    glVertex2i(834, 480);
    glEnd();

    //quad -3
    glColor3f(0.627, 0.329, 0.196);
    glBegin(GL_POLYGON);
    glVertex2i(720, 480);
    glVertex2i(834, 480);
    glVertex2i(852, 498);
    glVertex2i(738, 498);
    glEnd();

    //windows
    glColor3f(0.82, 0.984, 0.992);
    glBegin(GL_POLYGON);
    glVertex2i(732, 438);
    glVertex2i(768, 438);
    glVertex2i(768, 462);
    glVertex2i(732, 462);
    glEnd();

    glColor3f(0.82, 0.984, 0.992);
    glBegin(GL_POLYGON);
    glVertex2i(732+54, 438);
    glVertex2i(768+54, 438);
    glVertex2i(768+54, 462);
    glVertex2i(732+54, 462);
    glEnd();
    //window dividors
    glColor3f(0.627, 0.329, 0.196);
    glBegin(GL_LINES);
    glVertex2i(750, 438);
    glVertex2i(750, 462);
    glEnd();

    glColor3f(0.627, 0.329, 0.196);
    glBegin(GL_LINES);
    glVertex2i(804, 438);
    glVertex2i(804, 462);
    glEnd();

    glColor3f(0.627, 0.329, 0.196);
    glBegin(GL_LINES);
    glVertex2i(720, 420);
    glVertex2i(836, 420);
    glEnd();

}

void footpath()
{
    //==== Footpath - 1
    glColor3f(0.529, 0.529, 0.529);
    glBegin(GL_POLYGON);
    glVertex2i(0, 270);
    glVertex2i(1080, 270);
    glVertex2i(1080, 300);
    glVertex2i(0, 300);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(0, 300);
    glVertex2i(1080, 300);
    glEnd();

    //==== Footpath - 1(divider with road)
    for(int i = 0; i < 36; i++)
    {
        if(i % 2 == 0)
            glColor3f(1, 1, 1);
        else
            glColor3f(0, 0, 0);

        glBegin(GL_POLYGON);
        glVertex2i(0 + (i * 30), 258);
        glVertex2i(30 + (i * 30), 258);
        glVertex2i(30+(i * 30), 270);
        glVertex2i(0+(i * 30), 270);
        glEnd();
    }
}

void footpath2()
{
    // footpath - 2 big one:
    glColor3f(0.529, 0.529, 0.529);
    glBegin(GL_POLYGON);
    glVertex2i(0, 120);
    glVertex2i(480, 120);
    glVertex2i(516, 198);
    glVertex2i(0, 198);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(0, 108);
    glVertex2i(474, 108);
    glVertex2i(480, 120);
    glVertex2i(0, 120);
    glEnd();

    //==== Footpath - 2(divider with road)
    for(int i = 0; i < 16; i++)
    {
        if(i % 2 == 0)
            glColor3f(1, 1, 1);
        else
            glColor3f(0, 0, 0);

        glBegin(GL_POLYGON);
        glVertex2i(0 + (i * 30), 108);
        glVertex2i(30 + (i * 30), 108);
        glVertex2i(30+(i * 30), 120);
        glVertex2i(0+(i * 30), 120);
        glEnd();
    }

}

void extra_area()
{
    glColor3ub(0, 191, 255);
    glBegin(GL_POLYGON);
    glVertex2i(522, 42);
    glVertex2i(1080, 42);
    glVertex2i(1080, 198);
    glVertex2i(600, 198);
    glEnd();

    glColor3ub(0, 191, 255);
    glBegin(GL_POLYGON);
    glVertex2i(0, 42);
    glVertex2i(0, 0);
    glVertex2i(1080, 0);
    glVertex2i(1080, 42);
    glEnd();

    glColor3f(0.588, 0.62, 0.631);
    glBegin(GL_POLYGON);
    glVertex2i(0, 46);
    glVertex2i(0, 36);
    glVertex2i(526, 36);
    glVertex2i(526, 46);
    glEnd();

    glColor3f(0.588, 0.62, 0.631);
    glBegin(GL_POLYGON);
    glVertex2i(522, 46);;
    glVertex2i(526, 36);
    glVertex2i(606, 198);
    glVertex2i(594, 198);
    glEnd();

    glColor3f(0.588, 0.62, 0.631);
    glBegin(GL_POLYGON);
    glVertex2i(600, 198);;
    glVertex2i(594, 186);
    glVertex2i(1080, 186);
    glVertex2i(1080, 198);
    glEnd();

}


float bx = 0.0f;
float speed = 0.005f;
bool movingRight = true;

void clouds()
{
    glPushMatrix();
    glTranslatef(bx, 0, 0);

    // 1st cloud
    glColor3ub(255, 255, 255);
    circle(20, 30, 445, 660);
    circle(15, 20, 420, 660);
    circle(15, 20, 475, 660);

    // 2nd cloud
    circle(20, 30, 390, 570);
    circle(15, 20, 405, 570);
    circle(15, 20, 375, 570);

    // 3rd cloud
    circle(17, 27, 290, 660+80);
    circle(15, 23, 305, 660+80);
    circle(15, 19, 275, 660+80);

// 4th cloud
    int r = 0;
    circle(20, 20, r + 400, 700);
    circle(20, 20, r + 430, 700);
    circle(20, 20, r + 460, 700);
    circle(20, 20, r + 490, 700);
    circle(20, 20, r + 420, 720);
    circle(20, 20, r + 450, 720);
    circle(20, 20, r + 470, 720);

    r = 180;
    circle(20, 20, r + 400, 700);
    circle(20, 20, r + 430, 700);
    circle(20, 20, r + 460, 700);
    circle(20, 20, r + 490, 700);
    circle(20, 20, r + 420, 720);
    circle(20, 20, r + 450, 720);
    circle(20, 20, r + 470, 720);

    glPopMatrix();

    if (movingRight)
    {
        bx += speed;
        if (bx >= 580)
        {
            movingRight = false;
        }
    }
    else
    {
        bx -= speed;
        if (bx <= -400)
        {
            movingRight = true;
        }
    }

    glutPostRedisplay();
}


void roads()
{
    // Road - 1:
    glColor3f(0.188, 0.188, 0.18);
    glBegin(GL_POLYGON);
    glVertex2i(0, 198);
    glVertex2i(1080, 198);
    glVertex2i(1080, 258);
    glVertex2i(0, 258);
    glEnd();
    footpath2();

    // road-1 zebra crossing
    for(int i = 0; i < 3; i++)
    {
        glColor3f(0.888, 0.888, 0.88);
        glBegin(GL_POLYGON);
        glVertex2i(432, 204+(i * 18));
        glVertex2i(468, 204+(i * 18));
        glVertex2i(468, 216+(i * 18));
        glVertex2i(432, 216+(i * 18));
        glEnd();
    }

// Road - 2:
    glColor3f(0.188, 0.188, 0.18);
    glBegin(GL_POLYGON);
    glVertex2i(0, 108);
    glVertex2i(0, 42);
    glVertex2i(522, 42);
    glVertex2i(474, 108);
    glEnd();

    glColor3f(0.188, 0.188, 0.18);
    glBegin(GL_POLYGON);
    glVertex2i(474, 108);
    glVertex2i(522, 42);
    glVertex2i(600, 198);
    glVertex2i(516, 198);
    glEnd();

    //road-1 middle paints
    for(int i = 0; i < 30; i++)
    {
        glColor3f(1, 1, 1);
        glBegin(GL_LINES);
        glVertex2i(12 + (i * 42), 228);
        glVertex2i(36+(i * 42), 228);
        glEnd();
    }
    glLineWidth(1.0);

    //road-2 middle paints
    for(int i = 0; i < 14; i++)
    {
        glColor3f(1, 1, 1);
        glBegin(GL_LINES);
        glVertex2i(6 + (i * 34), 75);
        glVertex2i(24+(i * 34), 75);
        glEnd();
    }
    glLineWidth(1.0);
}


void house_7()
{
    //quad -1
    glColor3f(0.749, 0.745, 0.814);
    glBegin(GL_POLYGON);
    glVertex2i(852, 300);
    glVertex2i(990, 300);
    glVertex2i(990, 450);
    glVertex2i(852, 450);
    glEnd();

    //quad-2:
    glColor3f(0.58, 0.576, 0.55);
    glBegin(GL_POLYGON);
    glVertex2i(990, 300);
    glVertex2i(1014, 300);
    glVertex2i(1014, 468);
    glVertex2i(990, 450);
    glEnd();

    //quad -3
    glColor3f(0.58, 0.576, 0.55);
    glBegin(GL_POLYGON);
    glVertex2i(852, 450);
    glVertex2i(990, 450);
    glVertex2i(1014, 468);
    glVertex2i(876, 468);
    glEnd();

    //floor dividors lines
    glColor3f(0.169, 0.18, 0.18);
    glBegin(GL_LINES);
    glVertex2i(852, 408);
    glVertex2i(990, 408);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(990, 408);
    glVertex2i(1014, 426);
    glEnd();

    glColor3f(0.169, 0.18, 0.18);
    glBegin(GL_LINES);
    glVertex2i(852, 366);
    glVertex2i(990, 366);
    glEnd();

    glColor3f(0.169, 0.18, 0.18);
    glBegin(GL_LINES);
    glVertex2i(990, 366);
    glVertex2i(1014, 384);
    glEnd();

    glColor3f(0.169, 0.18, 0.18);
    glBegin(GL_LINES);
    glVertex2i(852, 450);
    glVertex2i(990, 450);
    glEnd();

    glColor3f(0.169, 0.18, 0.18);
    glBegin(GL_LINES);
    glVertex2i(990, 450);
    glVertex2i(1014, 468);
    glEnd();

    //windows
    for(int i = 0; i < 3; i++)
    {
        glColor3f(0.522, 0.678, 0.871);
        glBegin(GL_POLYGON);
        glVertex2i(864, 336 + (i * 42));
        glVertex2i(912, 336 + (i * 42));
        glVertex2i(912, 354 + (i * 42));
        glVertex2i(864, 354 + (i * 42));
        glEnd();

        glColor3f(0.522, 0.678, 0.871);
        glBegin(GL_POLYGON);
        glVertex2i(930, 336 + (i * 42));
        glVertex2i(978, 336 + (i * 42));
        glVertex2i(978, 354 + (i * 42));
        glVertex2i(930, 354 + (i * 42));
        glEnd();

        glColor3f(1.0, 1.0, 1.0);
        glBegin(GL_LINES);
        glVertex2i(888, 336 + (i * 42));
        glVertex2i(888, 354 + (i * 42));
        glEnd();

        glColor3f(1.0, 1.0, 1.0);
        glBegin(GL_LINES);
        glVertex2i(954, 336 + (i * 42));
        glVertex2i(954, 354 + (i * 42));
        glEnd();
    }
}

void house8()
{
    glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_POLYGON);
    glVertex2i(738,300);
    glVertex2i(836,300);
    glVertex2i(836,384);
    glVertex2i(738,384);
    glEnd();



    drawRoundedRect(726, 396, 120, 12, 5, 0.6, 0.6, 0.6);
    drawRoundedRect(726, 384, 120, 12, 5, 0.6, 0.6, 0.6);

    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_LINES);
    glVertex2i(750, 384);
    glVertex2i(750,300);
    glEnd();

    glColor3f(0.7, 0.7, 0.7);
    circle(12,14,810,396);

    drawRoundedRect(756, 342, 72, 36, 1.5, 0, 0.761, 0.969);
    drawRoundedRect(780, 300, 24, 30, 1, 0, 0.761, 0.969);

    for(int i = 0; i < 3; i++)
    {
        glColor3f(0.6, 0.6, 0.6);
        glBegin(GL_LINES);
        glVertex2i(774 + (i * 18), 378);
        glVertex2i(774 + (i * 18),342);
        glEnd();
    }

}
void footpath_light_poles()
{

    for(int i = 0; i < 4; i++)
    {


        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(58+(i * 120),150);
        glVertex2i(62+(i * 120),150);
        glVertex2i(62+(i * 120),204);
        glVertex2i(58+(i * 120),204);
        glEnd();

        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(54+(i * 120),150);
        glVertex2i(66+(i * 120),150);
        glVertex2i(66+(i * 120),154);
        glVertex2i(54+(i * 120),154);

        glEnd();

        isDay ? glColor3f(0.85, 0.988, 1) : glColor3f(0.988, 0.773, 0.165);
        circle(12, 14, 60+(i * 120), 202);
    }


}

void wall_behind()
{

    glColor3f(0.271, 0.184, 0.098);
    glBegin(GL_POLYGON);
    glVertex2i(0,300);
    glVertex2i(1080,300);
    glVertex2i(1080,348);
    glVertex2i(0,348);
    glEnd();

    glColor3f(0.212, 0.141, 0.071);
    glBegin(GL_POLYGON);
    glVertex2i(0,348);
    glVertex2i(1080,348);
    glVertex2i(1080,354);
    glVertex2i(0,354);
    glEnd();

}
bool carMoving = false;
float carX = 0;  // This will shift the car horizontally


void car_1() {
    int offset = carX;

    glColor3f(0.294, 0.349, 0.78);
    glBegin(GL_POLYGON);
    glVertex2i(810 + offset, 216);
    glVertex2i(900 + offset, 216);
    glVertex2i(900 + offset, 252);
    glVertex2i(828 + offset, 252);
    glEnd();

    glColor3f(0.294, 0.682, 0.78);
    glBegin(GL_POLYGON);
    glVertex2i(816 + offset, 228);
    glVertex2i(828 + offset, 228);
    glVertex2i(828 + offset, 252);
    glEnd();

    drawRoundedRect(840 + offset, 232, 18, 14, 2, 0.294, 0.682, 0.78);
    drawRoundedRect(870 + offset, 232, 18, 14, 2, 0.12, 0.141, 0.171);

    glColor3f(0, 0, 0);
    circle(8, 8, 828 + offset, 216);

    glColor3f(0, 0, 0);
    circle(8, 8, 876 + offset, 216);
}


void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 'm':
        case 'M':
            carMoving = true;
            break;
        case 's':
        case 'S':
            carMoving = false;
            break;
        case 'd':
        case 'D':
            isDay = true;
            glutPostRedisplay();
            break;
        case 'n':
        case 'N':
            isDay = false;
            glutPostRedisplay();
            break;
    }
}

void idle() {
    if (carMoving) {
        carX -= 0.05f;
        if (carX < -1000) carX = 300;
        glutPostRedisplay();
    }
}



void drawShapes(void)
{
    if (isDay)
        glClearColor(0.698, 0.871, 0.941, 0.5);
    else
        glClearColor(0.05f, 0.07f, 0.2f, 1.0f);

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(10.0);
    wall_behind();
    //-----------------------------------------
    house1();
    house2();

    house4();
    light_pole_between_h2_h3();
    house3();
    house5();
    house6();
    house_7();
    house8();
    //-----------------------------------------
    traffic_light();
    footpath();
    roads();
    footpath_light_poles();
    extra_area();
    if(isDay)
    {
        //sun
        glColor3f(1, 0.694, 0.314);
        circle(30, 42,990, 630);
    }
    else
    {
        crescent(990, 630, 40);
    }
    clouds();
    car_1();

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
    glutInitWindowSize(1000, 600);					// Set window size
    glutCreateWindow("An Example OpenGL Program");	// Create display window

    init();							// Execute initialisation procedure
    glutDisplayFunc(drawShapes);		// Send graphics to display window
    //glutKeyboardFunc(handleKey);
    glutKeyboardFunc(keyboard);
    glutIdleFunc(idle);

    glutMainLoop();					// Display everything and wait

    return 0;
}
