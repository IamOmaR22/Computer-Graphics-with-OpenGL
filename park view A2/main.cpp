#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(0.137255, 0.556863,0.137255, 0.0 );

	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 35.0, 0.0, 45.0);
}

void NusratJahanSuchana()
{
    float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);



    glColor3f(0.91 , 0.76, 0.65); // road
    glBegin(GL_POLYGON);


    glVertex2i(2,37);
    glVertex2i(0,33);
    glVertex2i(4,33);
    glVertex2i(6,37);
    glVertex2i(6,42);
    glVertex2i(8,45);
    glVertex2i(4,45);
    glVertex2i(2,42);


	glEnd();

    glColor3f(0.91 , 0.76, 0.65); // road
    glBegin(GL_POLYGON);


    glVertex2i(3,15);
    glVertex2i(7,11);
    glVertex2i(11,11);
    glVertex2i(7,15);
    glVertex2i(4,23);
    glVertex2i(4,33);
    glVertex2i(0,33);
    glVertex2i(0,23);


	glEnd();

    glColor3f(0.91 , 0.76, 0.65); // road
    glBegin(GL_POLYGON);


    glVertex2i(8,5);
    glVertex2i(14,0);
    glVertex2i(15,3);
    glVertex2i(12,5);
    glVertex2i(11,11);
    glVertex2i(7,11);


	glEnd();

    glColor3f(0.91 , 0.76, 0.65); // road
    glBegin(GL_POLYGON);


    glVertex2i(25,1);
    glVertex2i(28,2);
    glVertex2i(28,5);
    glVertex2i(21,3);
    glVertex2i(15,3);
    glVertex2i(14,0);
    glVertex2i(21,0);


	glEnd();

	glColor3f(0.91 , 0.76, 0.65); // road
    glBegin(GL_POLYGON);


    glVertex2i(28,2);
    glVertex2i(35,2);
    glVertex2i(35,5);
    glVertex2i(28,5);


	glEnd();

    glColor3f(0.196078, 0.8, 0.8); // pool
    glBegin(GL_POLYGON);


    glVertex2i(15,12);
    glVertex2i(35,17);
    glVertex2i(35,26);
    glVertex2i(15,22);


	glEnd();

    glColor3f(0.0,0.0,0.0);
	glLineWidth(3);

    glBegin(GL_LINES);
    glVertex2i(15,12);
    glVertex2i(35,17);

    glEnd();

    glBegin(GL_LINES);
    glVertex2i(35,17);
    glVertex2i(35,26);

    glEnd();

    glBegin(GL_LINES);
    glVertex2i(35,26);
    glVertex2i(15,22);

    glEnd();

    glBegin(GL_LINES);
    glVertex2i(15,22);
    glVertex2i(15,12);

    glEnd();

    glColor3f(0.647059 ,0.164706,0.164706);
    glBegin(GL_POLYGON);


    glVertex2i(19,21);
    glVertex2i(21,21);
    glVertex2i(20,24);
    glVertex2i(18,24);


	glEnd();


    glColor3f(0.647059 ,0.164706,0.164706);
	glLineWidth(3);

    glBegin(GL_LINES);
    glVertex2i(14,15);
    glVertex2i(17,16);

    glEnd();

	glLineWidth(3);

    glBegin(GL_LINES);
    glVertex2i(17,16);
    glVertex2i(17,20);

    glEnd();

    glLineWidth(3);

    glBegin(GL_LINES);
    glVertex2i(17,20);
    glVertex2i(14,19);

    glEnd();

	glLineWidth(3);

    glBegin(GL_LINES);
    glVertex2i(16,15);
    glVertex2i(16,20);

    glEnd();

    glColor3f(0.35, 0.16,0.14);//tree

	glLineWidth(3);

    glBegin(GL_LINES);
    glVertex2i(29,30);
    glVertex2i(29,35);

    glEnd();


	glLineWidth(3);

    glBegin(GL_LINES);
    glVertex2i(29,32);
    glVertex2i(27,34);

    glEnd();


	glLineWidth(3);

    glBegin(GL_LINES);
    glVertex2i(29,33);
    glVertex2i(31,34);

    glEnd();

    glColor3f(0.137255, 0.456863,0.137255);
    glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(29+2*cos(theta),36+2*sin(theta));
	}


	glEnd();

    glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(27+1.5*cos(theta),34+1.5*sin(theta));
	}


	glEnd();

    glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(31+1.7*cos(theta),34+1.7*sin(theta));
	}


	glEnd();

    glColor3f(0.91 , 0.76, 0.65);

	glLineWidth(10);

    glBegin(GL_LINES);
    glVertex2i(27,30);
    glVertex2i(31,30);

    glEnd();

    glColor3f(1.0 , 1.0, 1.0); //dolna

	glLineWidth(3);

    glBegin(GL_LINES);
    glVertex2i(10,37);
    glVertex2i(20,37);

    glEnd();
    glBegin(GL_LINES);
    glVertex2i(20,37);
    glVertex2i(20,32);

    glEnd();
    glBegin(GL_LINES);
    glVertex2i(20,37);
    glVertex2i(22,34);

    glEnd();
    glBegin(GL_LINES);
    glVertex2i(10,37);
    glVertex2i(10,32);

    glEnd();
    glBegin(GL_LINES);
    glVertex2i(10,37);
    glVertex2i(8,33);

    glEnd();
    glBegin(GL_LINES);
    glVertex2i(12,37);
    glVertex2i(12,34);

    glEnd();
    glBegin(GL_LINES);
    glVertex2i(14,37);
    glVertex2i(14,34);

    glEnd();
    glBegin(GL_LINES);
    glVertex2i(16,37);
    glVertex2i(16,34);

    glEnd();
    glBegin(GL_LINES);
    glVertex2i(18,37);
    glVertex2i(18,34);

    glEnd();

    glColor3f(1.0 , 1.0, 0.0);

    glBegin(GL_TRIANGLES);
    glVertex2i(11,33);
    glVertex2i(12,33);
    glVertex2i(12,34);

    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(13,33);
    glVertex2i(14,33);
    glVertex2i(14,34);

    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(15,33);
    glVertex2i(16,33);
    glVertex2i(16,34);

    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(17,33);
    glVertex2i(18,33);
    glVertex2i(18,34);

    glEnd();

    glColor3f(0.0 , 0.0, 0.0);

    glBegin(GL_POLYGON);
    glVertex2i(12,33);
    glVertex2i(13,33);
    glVertex2i(14,34);
    glVertex2i(12,34);

    glEnd();

    glColor3f(0.0 , 0.0, 0.0);

    glBegin(GL_POLYGON);
    glVertex2i(16,33);
    glVertex2i(17,33);
    glVertex2i(18,34);
    glVertex2i(16,34);

    glEnd();

    glColor3f(1.0 , 1.0, 0.0);

    glBegin(GL_LINES);
    glVertex2i(11,33);
    glVertex2i(14,33);

    glEnd();

    glColor3f(1.0 , 1.0, 0.0);

    glBegin(GL_LINES);
    glVertex2i(15,33);
    glVertex2i(18,33);

    glEnd();

    glColor3f(1.0 , 1.0, 1.0);

    glBegin(GL_POLYGON);
    glVertex2i(16,3);
    glVertex2i(17,3);
    glVertex2i(17,5);
    glVertex2i(16,5);

    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(19,3);
    glVertex2i(20,3);
    glVertex2i(20,5);
    glVertex2i(19,5);

    glEnd();

    glColor3f(0.0 , 0.0, 0.0);

    glLineWidth(6);

    glBegin(GL_LINES);
    glVertex2i(15,5);
    glVertex2i(21,5);

    glEnd();








	glFlush();
	}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

	glutInitWindowPosition(100, 100);
	glutInitWindowSize(600, 700);
	glutCreateWindow("171-15-8771");

	init();
	glutDisplayFunc(NusratJahanSuchana);
	glutMainLoop();

	return 0;
}
