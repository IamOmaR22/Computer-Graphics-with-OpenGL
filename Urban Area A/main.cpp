
#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(0.0,0.0,0.0,0.0 );

	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 35.0, 0.0, 35.0);
}

void KaziMehediHasan()
{
    float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);


	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(8+2.5*cos(theta),29+2.5*sin(theta));
	}

	glEnd();

    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(11+0.1*cos(theta),14+0.1*sin(theta));
	}

	glEnd();

	   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(15+0.1*cos(theta),17+0.1*sin(theta));
	}

	glEnd();

   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(20+0.1*cos(theta),17+0.1*sin(theta));
	}

	glEnd();

   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(2+0.1*cos(theta),33+0.1*sin(theta));
	}

	glEnd();

   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(3+0.1*cos(theta),30+0.1*sin(theta));
	}

	glEnd();

   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(15+0.1*cos(theta),33+0.1*sin(theta));
	}

	glEnd();

   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(20+0.1*cos(theta),30+0.1*sin(theta));
	}

	glEnd();

   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(30+0.1*cos(theta),34+0.1*sin(theta));
	}

	glEnd();

   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(23+0.1*cos(theta),23+0.1*sin(theta));
	}

	glEnd();

   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(38+0.1*cos(theta),23+0.1*sin(theta));
	}

	glEnd();

	   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(11+0.1*cos(theta),20+0.1*sin(theta));
	}

	glEnd();

	   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(14+0.1*cos(theta),23+0.1*sin(theta));
	}

	glEnd();

	   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(3+0.1*cos(theta),15+0.1*sin(theta));
	}

	glEnd();

	   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(3+0.1*cos(theta),19+0.1*sin(theta));
	}

	glEnd();

	   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(31+0.1*cos(theta),23+0.1*sin(theta));
	}

	glEnd();

	   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(30+0.1*cos(theta),30+0.1*sin(theta));
	}

	glEnd();

    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(25+0.2*cos(theta),17+0.2*sin(theta));
	}

	glEnd();

    glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(9+2.2*cos(theta),30+2.2*sin(theta));

	}

	glEnd();




    glColor3f( 0.184314, 0.184314,0.309804); //house 1
	glBegin(GL_POLYGON);

    glVertex2i(5,0);
	glVertex2i(9,0);
	glVertex2i(9,12);
	glVertex2i(5,12);

    glEnd();

    glColor3f( 1.0, 1.0,0.0);
	glBegin(GL_POLYGON);

    glVertex2i(6,0);
	glVertex2i(8,0);
	glVertex2i(8,3);
	glVertex2i(6,3);

    glEnd();


    glColor3f( 1.0, 2.0,0.6);
	glBegin(GL_POLYGON);

    glVertex2i(6,4);
	glVertex2i(8,4);
	glVertex2i(8,7);
	glVertex2i(6,7);

    glEnd();

    glColor3f( 1.0, 1.0,0.0);
	glBegin(GL_POLYGON);

    glVertex2i(6,8);
	glVertex2i(8,8);
	glVertex2i(8,11);
	glVertex2i(6,11);

    glEnd(); //house 1 end

    glColor3f( 0.184314, 0.184314,0.409804); //house 2
	glBegin(GL_POLYGON);

    glVertex2i(10,0);
	glVertex2i(15,0);
	glVertex2i(15,10);
	glVertex2i(10,10);

    glEnd();

    glColor3f( 1.0, 1.0,0.0);
	glBegin(GL_POLYGON);

    glVertex2i(11,1);
	glVertex2i(12,1);
	glVertex2i(12,4);
	glVertex2i(11,4);

    glEnd();

    glColor3f( 1.0, 1.0,0.0);
	glBegin(GL_POLYGON);

    glVertex2i(13,1);
	glVertex2i(14,1);
	glVertex2i(14,4);
	glVertex2i(13,4);

    glEnd();

    glColor3f( 1.0, 1.0,0.0);
	glBegin(GL_POLYGON);

    glVertex2i(11,6);
	glVertex2i(12,6);
	glVertex2i(12,9);
	glVertex2i(11,9);

    glEnd();

        glColor3f( 1.0, 1.0,0.0);
	glBegin(GL_POLYGON);

    glVertex2i(13,6);
	glVertex2i(14,6);
	glVertex2i(14,9);
	glVertex2i(13,9);

    glEnd(); //house 2 end

    glColor3f( 0.184314, 0.184314,0.309804);  //house 3
	glBegin(GL_POLYGON);

    glVertex2i(16,0);
	glVertex2i(20,0);
	glVertex2i(20,15);
	glVertex2i(16,15);

    glEnd();

    glColor3f( 1.0, 1.0,1.0);
	glBegin(GL_POLYGON);

    glVertex2i(17,1);
	glVertex2i(19,1);
	glVertex2i(19,5);
	glVertex2i(17,5);

    glEnd();

    glColor3f( 1.0, 1.0,1.0);
	glBegin(GL_POLYGON);

    glVertex2i(17,6);
	glVertex2i(19,6);
	glVertex2i(19,10);
	glVertex2i(17,10);

    glEnd();

    glColor3f( 1.0, 1.0,1.0);
	glBegin(GL_POLYGON);

    glVertex2i(17,11);
	glVertex2i(19,11);
	glVertex2i(19,14);
	glVertex2i(17,14);

    glEnd();  //house 3 end



    glColor3f( 0.184314, 0.184314,0.419804); // house 4
	glBegin(GL_POLYGON);

    glVertex2i(25,0);
	glVertex2i(30,0);
	glVertex2i(30,20);
	glVertex2i(25,20);

    glEnd();

    glColor3f( 1.0, 2.0,0.6);
	glBegin(GL_POLYGON);

    glVertex2i(26,0);
	glVertex2i(27,0);
	glVertex2i(27,4);
	glVertex2i(26,4);

    glEnd();

    glColor3f( 1.0, 2.0,0.6);
	glBegin(GL_POLYGON);

    glVertex2i(28,0);
	glVertex2i(29,0);
	glVertex2i(29,4);
	glVertex2i(28,4);

    glEnd();

    glColor3f( 1.0, 2.0,0.2);
	glBegin(GL_POLYGON);

    glVertex2i(26,6);
	glVertex2i(27,6);
	glVertex2i(27,10);
	glVertex2i(26,10);

    glEnd();

    glColor3f( 1.0, 2.0,0.2);
	glBegin(GL_POLYGON);

    glVertex2i(28,6);
	glVertex2i(29,6);
	glVertex2i(29,10);
	glVertex2i(28,10);

    glEnd();

    glColor3f( 1.0, 2.0,0.2);
	glBegin(GL_POLYGON);

    glVertex2i(26,12);
	glVertex2i(27,12);
	glVertex2i(27,16);
	glVertex2i(26,16);

    glEnd();

        glColor3f( 1.0, 2.0,0.2);
	glBegin(GL_POLYGON);

    glVertex2i(28,12);
	glVertex2i(29,12);
	glVertex2i(29,16);
	glVertex2i(28,16);

    glEnd();

    glColor3f( 1.0, 2.0,0.6);
	glBegin(GL_POLYGON);

    glVertex2i(26,17);
	glVertex2i(29,17);
	glVertex2i(29,19);
	glVertex2i(26,19);

    glEnd();







	glFlush();
	}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

	glutInitWindowPosition(100, 100);
	glutInitWindowSize(800, 900);
	glutCreateWindow("171-15-8647");

	init();
	glutDisplayFunc(KaziMehediHasan);
	glutMainLoop();

	return 0;
}

