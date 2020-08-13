#include<windows.h>
#include <GL/glut.h>


void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 35.0, 0.0, 25.0);
}

void minhajulAbedin(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window


	// Draw a couple of points

	//Set colour to red
	glColor3f(0.5, 0.5, 0.5);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(3, 5);
		glVertex2i(3, 25);
		glVertex2i(34, 25);
		glVertex2i(34, 5);

	glEnd();
	// H
	glColor3f(1.0, 0.4, 0.4);
	glBegin(GL_POLYGON);
		glVertex2i(10, 15);
		glVertex2i(10, 20);
		glVertex2i(11, 20);
		glVertex2i(11, 15);


	glEnd();
	glBegin(GL_POLYGON);
		glVertex2i(13, 15);
		glVertex2i(13, 20);
		glVertex2i(14, 20);
		glVertex2i(14, 15);


	glEnd();
	glBegin(GL_POLYGON);
		glVertex2i(10, 17);
		glVertex2i(10, 18);
		glVertex2i(14, 18);
		glVertex2i(14, 17);


	glEnd();
    // B
   glColor3f(0.5, 1.0, 1.0);
    glBegin(GL_POLYGON);
		glVertex2i(15, 20);
		glVertex2i(18, 20);
		glVertex2i(19, 19);
		glVertex2i(19, 16);
		glVertex2i(18, 15);
		glVertex2i(15, 15);


	glEnd();
	//B 1
	glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_POLYGON);
		glVertex2i(16, 19);
		glVertex2i(18, 19);
		glVertex2i(18, 18);
		glVertex2i(16, 18);



	glEnd();
   glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_POLYGON);
		glVertex2i(16, 17);
		glVertex2i(18, 17);
		glVertex2i(18, 16);
		glVertex2i(16, 16);



	glEnd();
	//D
    glColor3f(132,112,255);
    glBegin(GL_POLYGON);
		glVertex2i(20, 20);
		glVertex2i(23, 20);
		glVertex2i(24, 19);
		glVertex2i(24, 16);
		glVertex2i(23, 15);
		glVertex2i(20, 15);

	glEnd();
	//D 1
    glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_POLYGON);
		glVertex2i(21, 19);
		glVertex2i(23, 19);
		glVertex2i(23, 16);
		glVertex2i(21, 16);


	glEnd();
    // M
    glColor3f(0.5,1.0,0.5);
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);

		glVertex2i(16, 11);
		glVertex2i(17, 13);
		glVertex2i(18, 13);
		glVertex2i(18, 8);
		glVertex2i(17, 8);
		glVertex2i(17, 11);
		glVertex2i(16, 10);
		glVertex2i(15, 11);
		glVertex2i(15, 8);
		glVertex2i(14, 8);
		glVertex2i(14,13);
		glVertex2i(15, 13);


	glEnd();
	// M
    glColor3f(0.5,1.0,0.5);
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);

		glVertex2i(26, 11);
		glVertex2i(27, 13);
		glVertex2i(28, 13);
		glVertex2i(28, 8);
		glVertex2i(27, 8);
		glVertex2i(27, 11);
		glVertex2i(26, 10);
		glVertex2i(25, 11);
		glVertex2i(25, 8);
		glVertex2i(24, 8);
		glVertex2i(24,13);
		glVertex2i(25, 13);

	glEnd();
	//A
    glColor3f(0.0, 1.0, 1.0);
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);

		glVertex2i(19, 8);
		glVertex2i(20, 13);
		glVertex2i(22, 13);
		glVertex2i(23, 8);
		glVertex2i(22, 8);
		glVertex2i(22, 10);
		glVertex2i(20, 10);
		glVertex2i(20, 8);
		glVertex2i(19, 8);
		glVertex2i(20, 13);


	glEnd();
	glColor3f(0.0, 1.0, 1.0);
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);

		glVertex2i(21, 12);
		glVertex2i(22, 11);
		glVertex2i(20, 11);



	glEnd();

	// shapes
    glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2i(9, 12);
		glVertex2i(11, 12);
		glVertex2i(5, 5);
		glVertex2i(3, 5);


	glEnd();
     glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2i(31, 25);
		glVertex2i(33, 25);
		glVertex2i(28, 19);
		glVertex2i(26, 19);


	glEnd();
	// shape 2
   glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
		glVertex2i(3, 23);
		glVertex2i(19, 23);
		glVertex2i(19, 22);
		glVertex2i(3, 22);


	glEnd();
	glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
		glVertex2i(23, 7);
		glVertex2i(34, 7);
		glVertex2i(34, 6);
		glVertex2i(23, 6);


	glEnd();
	// shape 3
	glColor3f(0.5,1.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2i(3, 15);
		glVertex2i(7, 15);
		glVertex2i(7, 14);
		glVertex2i(3, 14);


	glEnd();
	glColor3f(0.5,1.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2i(30, 15);
		glVertex2i(34, 15);
		glVertex2i(34, 14);
		glVertex2i(30, 14);


	glEnd();
	// shape 4
    glColor3f(132,112,255);
	glBegin(GL_POLYGON);
		glVertex2i(6, 20);
		glVertex2i(7, 19);
		glVertex2i(6, 18);
		glVertex2i(5, 19);


	glEnd();
	glColor3f(132,112,255);
	glBegin(GL_POLYGON);
		glVertex2i(31, 11);
		glVertex2i(32, 10);
		glVertex2i(31, 9);
		glVertex2i(30, 10);


	glEnd();


	glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(800, 500);					// Set window size
	glutCreateWindow("171-15-8700");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(minhajulAbedin);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
