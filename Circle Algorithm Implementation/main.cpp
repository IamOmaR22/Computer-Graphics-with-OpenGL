#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

static float	tx	=  0.0;
static float	ty	=  0.0;

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glOrtho(-15,15,-15,15,-15,5);
}
void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=100;i++)

    {
        float angle = 2 * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}


void MdOmarFaruk()
{
    glClear(GL_COLOR_BUFFER_BIT);
   /*
    glColor3f(0.0f, 1.0f, 0.0f);

    glBegin(GL_QUADS);
        glVertex3d(7.0, 5.0, 0.0);
        glVertex3d(-7.0, 5.0, 0.0);
        glVertex3d(-7.0, -5.0, 0.0);
        glVertex3f(7.0, -5.0, 0.0);
    glEnd();
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3d(-7.0, -5.0, 0.0);
        glVertex3d(-7.0, -14.0, 0.0);
        glVertex3f(-6.0, -14.0, 0.0);
        glVertex3d(-6.0, -5.0, 0.0);
    glEnd();
    */



    circle(3,3,0,0);

    glColor3f(1.0f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslatef(8,8,0);
    circle(3,3,0,0);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,1.0,0.0);
    glTranslatef(10,10,0);
    circle(3,3,0,0);


    glFlush();
}
int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("171-15-8709");
    init();
    glutDisplayFunc(MdOmarFaruk);
    glutMainLoop();
    return 0;
}
