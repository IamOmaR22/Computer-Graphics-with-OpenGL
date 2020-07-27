#include<windows.h>
#include <GL/glut.h>


void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 1.0);	// Set display window colour to back

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 30.0, 0.0, 20.0);
}

void MdOmarFaruk(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window


	// Draw a couple of points

	//Set colour to white
	glColor3f(1.0, 1.0, 1.0);




	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(5, 0);
		glVertex2i(5, 10);
		glVertex2i(25, 10);
		glVertex2i(25, 0);
	glEnd();

	//Set colour to green
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_TRIANGLES);
		glVertex2i(5, 10);
		glVertex2i(15, 15);
		glVertex2i(25, 10);
	glEnd();





glColor3f(1.0, 0.0, 0.0);

	glBegin(GL_POLYGON);
		glVertex2i(7, 5);
		glVertex2i(7, 9);
		glVertex2i(12, 9);
		glVertex2i(12, 5);
	glEnd();


	glColor3f(1.0, 0.0, 0.0);

	glBegin(GL_POLYGON);
		glVertex2i(18, 5);
		glVertex2i(18, 9);
		glVertex2i(23, 9);
		glVertex2i(23, 5);
	glEnd();

	glColor3f(0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);
		glVertex2i(14, 0);
		glVertex2i(14, 5);
		glVertex2i(17, 5);
		glVertex2i(17, 0);
	glEnd();

	glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(650, 440);					// Set window size
	glutCreateWindow("171-15-8709");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(MdOmarFaruk);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}

