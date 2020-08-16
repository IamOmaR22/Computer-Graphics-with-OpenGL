#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(1.0,1.0,1.0,1.0 );

	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 30.0, 0.0, 35.0);
}

void KaziMehediHasan()
{
    float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);

	 glColor3f( 0.0, 0.0,0.0);
    glLineWidth(6);
	glBegin(GL_LINES);

    glVertex2i(1,1);
	glVertex2i(1,17);

    glEnd();

    glColor3f( 0.0, 0.0,0.0);
    glLineWidth(6);
	glBegin(GL_LINES);

    glVertex2i(1,17);
	glVertex2i(23,17);

    glEnd();

    glColor3f( 0.0, 0.0,0.0);
    glLineWidth(7);
	glBegin(GL_LINES);

    glVertex2i(23,17);
	glVertex2i(23,1);

    glEnd();

    glColor3f( 0.0, 0.0,0.0);
    glLineWidth(6);
	glBegin(GL_LINES);

    glVertex2i(23,1);
	glVertex2i(1,1);

    glEnd(); //border end


	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(10+4*cos(theta),8+6*sin(theta));
	}

	glEnd();

		glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(14+4*cos(theta),8+6*sin(theta));
	}

	glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(12,14);
    glVertex2i(14,15);
    glVertex2i(15,17);
    glVertex2i(13,16);

	glEnd();


		glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(18+3*cos(theta),9+3*sin(theta));
	}

	glEnd();



	glFlush();
	}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 600);
	glutCreateWindow("171-15-8647");

	init();
	glutDisplayFunc(KaziMehediHasan);
	glutMainLoop();

	return 0;
}
