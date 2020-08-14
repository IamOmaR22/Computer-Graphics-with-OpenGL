#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(0, 0, 0, 0);// Set display window colour to white
    glVertex2f(-1,-1);
	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 30.0, 0.0, 30.0);
}

void momo()
{
    float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window
    //Set colour to red

    glColor3ub (0, 0, 0);     //Display
    glBegin(GL_POLYGON);
    	 glColor3f(0.0, 0, 0.1);

    glVertex2d (0, 0);
    	 glColor3f(0, 0, 0.1);

    glVertex2d (30, 0);
    	 glColor3f(0, 0, 0);

    glVertex2d (30, 30);
    	 glColor3f(0, 0, 0);

    glVertex2d (0, 30);
    glEnd();


	glColor3ub(230, 230, 250);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(9+2*cos(theta),19+2*sin(theta));          //half230, 230, 250
	}
	glEnd();


	glColor3ub(1, 1, 1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(10+2*cos(theta),20+2*sin(theta));         //moon 0, 20, 40
	}
	glEnd();

    //star

    glColor3ub(230, 230, 250);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(20+.1*cos(theta),20+.1*sin(theta));          //half230, 230, 250
	}
	glEnd();

	 glColor3ub(230, 230, 250);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(25+.1*cos(theta),23+.1*sin(theta));          //half230, 230, 250
	}
	glEnd();

	 glColor3ub(230, 230, 250);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(25+.1*cos(theta),20+.1*sin(theta));          //half230, 230, 250
	}
	glEnd();

	 glColor3ub(230, 230, 250);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(15+.1*cos(theta),22+.1*sin(theta));          //half230, 230, 250
	}
	glEnd();

	 glColor3ub(230, 230, 250);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(2+.1*cos(theta),15+.1*sin(theta));          //half230, 230, 250
	}
	glEnd();

	 glColor3ub(230, 230, 250);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(3+.1*cos(theta),25+.1*sin(theta));          //half230, 230, 250
	}
	glEnd();

	 glColor3ub(230, 230, 250);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(13+.1*cos(theta),28+.1*sin(theta));          //half230, 230, 250
	}
	glEnd();

	 glColor3ub(230, 230, 250);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(10+.1*cos(theta),5+.1*sin(theta));          //half230, 230, 250
	}
	glEnd();

	 glColor3ub(230, 230, 250);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(10+.1*cos(theta),10+.1*sin(theta));          //half230, 230, 250
	}
	glEnd();


	// b1
    glColor3f(0.1, 0.1, 0.1);

	glBegin(GL_POLYGON);
		glVertex2i(0, 10);
		glVertex2i(5, 10);

		glVertex2i(5, 0);
		glVertex2i(0, 0);

	glEnd();

	 glColor3f(255, 215, 0);

	glBegin(GL_POLYGON);
		glVertex2i(1, 9);
		glVertex2i(2, 9);

		glVertex2i(2, 7);
		glVertex2i(1, 7);

	glEnd();

	 glColor3f(255, 215, 0);

	glBegin(GL_POLYGON);
		glVertex2i(3, 9);
		glVertex2i(4, 9);

		glVertex2i(4, 7);
		glVertex2i(3, 7);

	glEnd();

	 glColor3f(255, 215, 0);

	glBegin(GL_POLYGON);
		glVertex2i(1, 5);
		glVertex2i(2, 5);

		glVertex2i(2, 2);
		glVertex2i(1, 2);

	glEnd();

	 glColor3f(255, 215, 0);

	glBegin(GL_POLYGON);
		glVertex2i(3, 5);
		glVertex2i(4, 5);

		glVertex2i(4, 2);
		glVertex2i(3, 2);

	glEnd();

	// b2
    glColor3f(0.1, 0.15, 0.13);

	glBegin(GL_POLYGON);
		glVertex2i(5, 8);
		glVertex2i(10, 8);

		glVertex2i(10, 0);
		glVertex2i(5, 0);

	glEnd();

	 glColor3f(0.81, 0.71, 0.23);

	glBegin(GL_POLYGON);
		glVertex2i(6, 6);
		glVertex2i(7, 6);

		glVertex2i(7, 2);
		glVertex2i(6, 2);

	glEnd();

	 glColor3f(0.81, 0.71, 0.23);

	glBegin(GL_POLYGON);
		glVertex2i(8, 6);
		glVertex2i(9, 6);

		glVertex2i(9, 2);
		glVertex2i(8, 2);

	glEnd();



	// b3
    glColor3f(0.1, 0.1, 0.1);

	glBegin(GL_POLYGON);
		glVertex2i(15, 15);
		glVertex2i(20, 15);

		glVertex2i(20, 0);
		glVertex2i(15, 0);

	glEnd();

	 glColor3f(255, 215, 0);

	glBegin(GL_POLYGON);
		glVertex2i(16, 14);
		glVertex2i(17, 14);

		glVertex2i(17, 11);
		glVertex2i(16, 11);

	glEnd();

glColor3f(255, 215, 0);

	glBegin(GL_POLYGON);
		glVertex2i(18, 14);
		glVertex2i(19, 14);

		glVertex2i(19, 11);
		glVertex2i(18, 11);

	glEnd();

	 glColor3f(255, 215, 0);

	glBegin(GL_POLYGON);
		glVertex2i(16, 9);
		glVertex2i(17, 9);

		glVertex2i(17, 5);
		glVertex2i(16, 5);

	glEnd();

	 glColor3f(255, 215, 0);

	glBegin(GL_POLYGON);
		glVertex2i(18, 9);
		glVertex2i(19, 9);

		glVertex2i(19, 5);
		glVertex2i(18, 5);

	glEnd();
	 glColor3f(255, 215, 0);

	glBegin(GL_POLYGON);
		glVertex2i(17, 4);
		glVertex2i(18, 4);

		glVertex2i(18, 0);
		glVertex2i(17, 0);

	glEnd();




	// b4
    glColor3f(0.1, 0.15, 0.13);

	glBegin(GL_POLYGON);
		glVertex2i(20, 10);
		glVertex2i(25, 10);

		glVertex2i(25, 0);
		glVertex2i(20, 0);

	glEnd();

	 glColor3f(0.81, 0.71, 0.23);

	glBegin(GL_POLYGON);
		glVertex2i(21, 9);
		glVertex2i(23, 9);

		glVertex2i(23, 5);
		glVertex2i(21, 5);

	glEnd();

	 glColor3f(0.81, 0.71, 0.23);

	glBegin(GL_POLYGON);
		glVertex2i(21, 4);
		glVertex2i(23, 4);

		glVertex2i(23, 0);
		glVertex2i(21, 0);

	glEnd();

	// b5
    glColor3f(0.1, 0.1, 0.1);

	glBegin(GL_POLYGON);
		glVertex2i(25, 0);
		glVertex2i(25, 15);

		glVertex2i(30, 15);
		glVertex2i(30, 0);

	glEnd();

	 glColor3f(255, 215, 0);

	glBegin(GL_POLYGON);
		glVertex2i(26, 14);
		glVertex2i(28, 14);

		glVertex2i(28, 8);
		glVertex2i(26, 8);

	glEnd();

	 glColor3f(255, 215, 0);

	glBegin(GL_POLYGON);
		glVertex2i(26, 6);
		glVertex2i(28, 6);

		glVertex2i(28, 0);
		glVertex2i(26, 0);

	glEnd();



glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(400, 400);					// Set window size
	glutCreateWindow("171-15-8849");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(momo);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
