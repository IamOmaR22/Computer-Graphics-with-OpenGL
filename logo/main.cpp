#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(255, 255, 255, 0);// Set display window colour to white
    //glVertex2f(-1,-1);
	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 40.0, 0.0, 30.0);
}

void momo()
{

    float theta;
    int i;
    glClear(GL_COLOR_BUFFER_BIT);



	//circle

	glColor3ub(255, 102, 0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(15+12*cos(theta),15+12*sin(theta)); // orange circle at 15,15
	}
	glEnd();

	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(15+6*cos(theta),17+6*sin(theta)); //white circle at 15,17
	}
	glEnd();
	glColor3ub(255, 102, 0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(15+3*cos(theta),17+3*sin(theta)); //mid circle at 15,17
	}
	glEnd();


	// triangles shape
    glColor3f(255, 255, 255);

	glBegin(GL_TRIANGLES);
		glVertex2i(15, 24);
		glVertex2i(13, 22);
		glVertex2i(17, 22);

	glEnd();

	 glColor3f(255, 255, 255);

	glBegin(GL_TRIANGLES);
		glVertex2i(17, 24);
		glVertex2i(18, 22);
		glVertex2i(15, 22);

	glEnd();


 glColor3f(255, 255, 255);

	glBegin(GL_TRIANGLES);
		glVertex2i(19, 23);
		glVertex2i(19, 20);
		glVertex2i(16, 22);

	glEnd();


	 glColor3f(255, 255, 255);

	glBegin(GL_TRIANGLES);
		glVertex2i(21, 22);
		glVertex2i(20, 19);
		glVertex2i(17, 21);

	glEnd();

	 glColor3f(255, 255, 255);

	glBegin(GL_TRIANGLES);
		glVertex2i(22, 20);
		glVertex2i(21, 17);
		glVertex2i(20, 20);

	glEnd();

	 glColor3f(255, 255, 255);

	glBegin(GL_TRIANGLES);
		glVertex2i(23, 17);
		glVertex2i(20, 15);
		glVertex2i(20, 19);

	glEnd();


	 glColor3f(255, 255, 255);

	glBegin(GL_TRIANGLES);
		glVertex2i(22, 14);
		glVertex2i(18, 14);
		glVertex2i(20, 17);

	glEnd();


	 glColor3f(255, 255, 255);

	glBegin(GL_TRIANGLES);
		glVertex2i(20, 12);
		glVertex2i(18, 13);
		glVertex2i(20, 15);

	glEnd();

	 glColor3f(255, 255, 255);

	glBegin(GL_TRIANGLES);
		glVertex2i(13, 24);
		glVertex2i(15, 22);
		glVertex2i(12, 22);

	glEnd();

	 glColor3f(255, 255, 255);

	glBegin(GL_TRIANGLES);
		glVertex2i(11, 23);
		glVertex2i(14, 22);
		glVertex2i(11, 20);

	glEnd();

	 glColor3f(255, 255, 255);

	glBegin(GL_TRIANGLES);
		glVertex2i(9, 22);
		glVertex2i(13, 21);
		glVertex2i(10, 19);

	glEnd();

	 glColor3f(255, 255, 255);

	glBegin(GL_TRIANGLES);
		glVertex2i(8, 20);
		glVertex2i(10, 20);
		glVertex2i(9, 17);

	glEnd();


	 glColor3f(255, 255, 255);

	glBegin(GL_TRIANGLES);
		glVertex2i(7, 17);
		glVertex2i(10, 19);
		glVertex2i(10,15);

	glEnd();


	 glColor3f(255, 255, 255);

	glBegin(GL_TRIANGLES);
		glVertex2i(10, 17);
		glVertex2i(12, 14);
		glVertex2i(8, 14);

	glEnd();

	 glColor3f(255, 255, 255);

	glBegin(GL_TRIANGLES);
		glVertex2i(10, 15);
		glVertex2i(12, 13);
		glVertex2i(10, 12);

	glEnd();




	// polygonal shape
    glColor3f(255, 255, 255);

	glBegin(GL_POLYGON);
		glVertex2i(12, 13);
		glVertex2i(18, 13);

		glVertex2i(20, 6);
		glVertex2i(18, 7);
		glVertex2i(16, 6);
		glVertex2i(15, 10);

		glVertex2i(14, 6);
		glVertex2i(12, 7);
        glVertex2i(10, 6);


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
