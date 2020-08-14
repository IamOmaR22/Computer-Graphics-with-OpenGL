#include<windows.h>
#include <GL/glut.h>

void init(void)
{
	glClearColor(0, 0, 0, 0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 30.0, 0.0, 30.0);
}

void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window



	// Draw a couple of points

	//Set colour to green
	glColor3f(0.0,255.0,0.0	);

	// Draw a filled triangle
	glBegin(GL_TRIANGLES);
		glVertex2i(10, 20);
		glVertex2i(3, 15);
		glVertex2i(18, 15);
	glEnd();

	//Set colour to red
	glColor3f(255.0, 248.0, 220.0);

	// Draw a filled quadrilateral
	glBegin(GL_POLYGON);
		glVertex2i(3, 15);
		glVertex2i(18, 15);

		glVertex2i(3, 15);
		glVertex2i(3, 5);

		glVertex2i(18, 15);
		glVertex2i(18, 5);

		glVertex2i(3, 5);
		glVertex2i(18, 5);
	glEnd();

	//Set colour to red
	glColor3f(0, 0, 128);

	// Draw a filled quadrilateral
	glBegin(GL_POLYGON);
		glVertex2i(8, 10);
		glVertex2i(12, 10);

		glVertex2i(8, 10);
		glVertex2i(8, 5);

		glVertex2i(8, 5);
		glVertex2i(12, 5);

		glVertex2i(12, 5);
		glVertex2i(12, 10);
	glEnd();

	//Set colour to red
	glColor3f(255, 0 ,0	);

	// Draw a filled quadrilateral
	glBegin(GL_POLYGON);
		glVertex2i(4, 14);
		glVertex2i(7, 14);

		glVertex2i(4, 14);
		glVertex2i(4, 11);

		glVertex2i(4, 11);
		glVertex2i(7, 11);

		glVertex2i(7, 14);
		glVertex2i(7, 11);
	glEnd();

	//Set colour to red
	glColor3f(255, 0 ,0	);

	// Draw a filled quadrilateral
	glBegin(GL_POLYGON);
		glVertex2i(13, 14);
		glVertex2i(16, 14);

		glVertex2i(13, 14);
		glVertex2i(13, 11);

		glVertex2i(13, 11);
		glVertex2i(16, 11);

		glVertex2i(16, 14);
		glVertex2i(16, 11);
	glEnd();


glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(350, 350);					// Set window size
	glutCreateWindow("171-15-8849");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(drawShapes);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
