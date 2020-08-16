#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(1.0,1.0,1.0,1.0 );

	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 35.0, 0.0, 30.0);
}

void PreetomRoy()
{
    float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);



    glColor3f( 0.658824,  0.658824,0.658824); // road
    glBegin(GL_POLYGON);
    glVertex2i(0,1);
    glVertex2i(35,0);
    glVertex2i(35,9);
    glVertex2i(0,9);

	glEnd();

    glColor3f(0.137255, 0.556863,0.137255); // background middle
    glBegin(GL_POLYGON);
    glVertex2i(0,8);
    glVertex2i(35,8);
    glVertex2i(35,24);
    glVertex2i(0,24);

	glEnd();

    glColor3f(0.137255, 0.556863,0.137255); // background down
    glBegin(GL_POLYGON);
    glVertex2i(0,0);
    glVertex2i(35,0);
    glVertex2i(35,1);
    glVertex2i(0,1);

	glEnd();



    glColor3f(0.0, 1.0, 1.0); //pond
    glBegin(GL_POLYGON);
	for(i=0;i<300;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(17+10*cos(theta),18+4*sin(theta));
	}


	glEnd();

    glColor3f(0.196078,0.6,0.8);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2i(15,19);
    glVertex2i(17,19);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(19,19);
    glVertex2i(21,19);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(22,19);
    glVertex2i(23,19);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(11,19);
    glVertex2i(14,19);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(9,18);
    glVertex2i(13,18);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(14,18);
    glVertex2i(16,18);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(18,18);
    glVertex2i(20,18);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(21,18);
    glVertex2i(24,18);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(11,17);
    glVertex2i(14,17);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(15,17);
    glVertex2i(17,17);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(18,17);
    glVertex2i(20,17);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(21,17);
    glVertex2i(22,17);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(23,17);
    glVertex2i(24,17);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(11,16);
    glVertex2i(13,16);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(14,16);
    glVertex2i(16,16);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(18,16);
    glVertex2i(19,16);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(20,16);
    glVertex2i(23,16);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(12,20);
    glVertex2i(13,20);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(14,20);
    glVertex2i(16,20);

	glEnd();



	glBegin(GL_LINES);
    glVertex2i(19,20);
    glVertex2i(22,20);

	glEnd();

    glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
    glVertex2i(22,16);
    glVertex2i(26,16);
    glVertex2i(26,17);
    glVertex2i(22,17);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(17,20);
    glVertex2i(17,23);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(18,20);
    glVertex2i(18,23);

	glEnd();

		glBegin(GL_LINES);
    glVertex2i(17,22);
    glVertex2i(18,22);

	glEnd();

		glBegin(GL_LINES);
    glVertex2i(17,21);
    glVertex2i(18,21);

	glEnd();


    glColor3f(0.658824, 0.658824, 0.658824); // post
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2i(2,8);
    glVertex2i(2,16);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(1,15);
    glVertex2i(3,15);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(3,15);
    glVertex2i(3,14);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(1,15);
    glVertex2i(1,14);

	glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(2+0.5*cos(theta),16+0.5*sin(theta));
	}


	glEnd();

	    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(1+0.5*cos(theta),14+0.5*sin(theta));
	}


	glEnd();

	    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(3+0.5*cos(theta),14+0.5*sin(theta));
	}


	glEnd();

    glColor3f(1.0, 1.0, 1.0); //bench 1
    glBegin(GL_POLYGON);
    glVertex2i(4,8);
    glVertex2i(5,8);
    glVertex2i(6,9);
    glVertex2i(5,9);

	glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(9,8);
    glVertex2i(10,8);
    glVertex2i(9,9);
    glVertex2i(8,9);

	glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(3,9);
    glVertex2i(11,9);
    glVertex2i(10,10);
    glVertex2i(4,10);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(4,11);
    glVertex2i(10,11);

	glEnd();

	    glBegin(GL_LINES);
    glVertex2i(4,12);
    glVertex2i(10,12);

	glEnd();

	    glBegin(GL_LINES);
    glVertex2i(5,10);
    glVertex2i(5,12);

	glEnd();

	    glBegin(GL_LINES);
    glVertex2i(9,10);
    glVertex2i(9,12);

	glEnd();

    glColor3f(1.0, 1.0, 1.0); //bench 2
    glBegin(GL_POLYGON);
    glVertex2i(15,8);
    glVertex2i(16,8);
    glVertex2i(17,9);
    glVertex2i(16,9);

	glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(20,8);
    glVertex2i(21,8);
    glVertex2i(20,9);
    glVertex2i(19,9);

	glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(14,9);
    glVertex2i(22,9);
    glVertex2i(21,10);
    glVertex2i(15,10);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(15,11);
    glVertex2i(21,11);

	glEnd();

	    glBegin(GL_LINES);
    glVertex2i(15,12);
    glVertex2i(21,12);

	glEnd();

	    glBegin(GL_LINES);
    glVertex2i(16,10);
    glVertex2i(16,12);

	glEnd();

	    glBegin(GL_LINES);
    glVertex2i(20,10);
    glVertex2i(20,12);

	glEnd();


	glColor3f(0.658824, 0.658824, 0.658824); // post 2
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2i(13,8);
    glVertex2i(13,16);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(12,15);
    glVertex2i(12,14);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(14,15);
    glVertex2i(14,14);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(12,15);
    glVertex2i(14,15);

	glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(13+0.5*cos(theta),16+0.5*sin(theta));
	}


	glEnd();

	    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(12+0.5*cos(theta),14+0.5*sin(theta));
	}


	glEnd();

	    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(14+0.5*cos(theta),14+0.5*sin(theta));
	}


	glEnd();

	glColor3f(0.137255, 0.356863, 0.1372554); // grass
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2i(25,8);
    glVertex2i(25,11);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(25,8);
    glVertex2i(24,10);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(25,8);
    glVertex2i(26,10);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(30,8);
    glVertex2i(30,11);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(30,8);
    glVertex2i(29,10);

	glEnd();

    glBegin(GL_LINES);
    glVertex2i(30,8);
    glVertex2i(31,10);

	glEnd();

	glColor3f(0.658824, 0.688824,  0.758824); //building
    glBegin(GL_POLYGON);

    glVertex2i(32,15);
	glVertex2i(35,15);
	glVertex2i(35,23);
	glVertex2i(32,23);

    glEnd();

    glColor3f(0.647059,0.164706,0.164706);
    glBegin(GL_POLYGON);

    glVertex2i(33,16);
	glVertex2i(34,16);
	glVertex2i(34,18);
	glVertex2i(33,18);

    glEnd();

    glColor3f(0.647059,0.164706,0.164706);
    glBegin(GL_POLYGON);

    glVertex2i(33,19);
	glVertex2i(34,19);
	glVertex2i(34,21);
	glVertex2i(33,21);

    glEnd();

    glColor3f(0.196078, 0.6, 0.8); // upper background
    glBegin(GL_POLYGON);
    glVertex2i(0,24);
    glVertex2i(35,24);
    glVertex2i(35,30);
    glVertex2i(0,30);


    glEnd();

    glColor3f( 0.35, 0.16,0.14); // upeer tree
    glLineWidth(6);
	glBegin(GL_LINES);

    glVertex2i(25,23);
	glVertex2i(25,28);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(25,25);
	glVertex2i(24,26);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(25,26);
	glVertex2i(27,27);
    glEnd();

    glColor3f(0.137255, 0.456863,0.137255);
    glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(25+1.5*cos(theta),28+1.5*sin(theta));
	}


	glEnd();

	    glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(24+1*cos(theta),26+1*sin(theta));
	}


	glEnd();

	    glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(26+1*cos(theta),27+1*sin(theta));
	}


	glEnd();



	glColor3f( 0.35, 0.16,0.14); // bottom tree
    glLineWidth(6);
	glBegin(GL_LINES);

    glVertex2i(30,15);
	glVertex2i(30,22);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(30,18);
	glVertex2i(28,20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(30,19);
	glVertex2i(31,20);
    glEnd();

    glColor3f(0.137255, 0.456863,0.137255);
    glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(30+1.5*cos(theta),23+1.5*sin(theta));
	}


	glEnd();

	    glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(32+1.2*cos(theta),21+1.2*sin(theta));
	}


	glEnd();

    glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(28+1*cos(theta),20+1*sin(theta));
	}


	glEnd();

    glColor3f(1.0,1.0,0.0);// sun
    glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(18+2*cos(theta),27+2*sin(theta));
	}


	glEnd();






	glFlush();
	}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

	glutInitWindowPosition(100, 100);
	glutInitWindowSize(700, 600);
	glutCreateWindow("171-15-8830");

	init();
	glutDisplayFunc(PreetomRoy);
	glutMainLoop();

	return 0;
}
