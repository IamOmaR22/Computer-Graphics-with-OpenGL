#include<windows.h>
#include <GL/glut.h>

void init(void)
{
	glClearColor(0.0,0.0,0.0,0.0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 35.0, 0.0, 20.0);
}

void KaziMehediHasan(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

	// Draw a filled quadrilateral

glColor3f(0.0,0.19,0.1);
    glBegin(GL_POLYGON);
		glVertex2i(0, 0);
		glVertex2i(0, 20);

		glVertex2i(33, 20);
		glVertex2i(35, 18);

        glVertex2i(35, 0);



	 glColor3f(255,255,0);


    glBegin(GL_POLYGON);
		glVertex2i(4, 15);
		glVertex2i(2, 17);

		glVertex2i(4, 17);
		glVertex2i(5, 19);

        glVertex2i(6, 17);
		glVertex2i(8, 17);

        glVertex2i(6, 15);
		glVertex2i(7, 13);

        glVertex2i(5, 14);
		glVertex2i(3, 13);

	glEnd();

glColor3f(1.0,0.5,0.0);

        glLineWidth(4);
        glBegin(GL_LINES);
        glVertex2i(10, 11);
		glVertex2i(10, 15);

    glEnd();

glColor3f(1.0,0.5,0.0);
    	glBegin(GL_LINES);
        glVertex2i(10, 13);
		glVertex2i(12, 13);

    glEnd();

glColor3f(1.0,0.5,0.0);
        glBegin(GL_LINES);
        glVertex2i(12, 11);
		glVertex2i(12, 15);

    glEnd();

glColor3f(1.0,0.5,0.0);
        glBegin(GL_LINES);
        glVertex2i(12, 11);
		glVertex2i(13, 13);

    glEnd();

glColor3f(1.0,0.5,0.0);
        glBegin(GL_LINES);
        glVertex2i(13, 13);
		glVertex2i(14, 11);

    glEnd();

glColor3f(1.0,0.5,0.0);
        glBegin(GL_LINES);
        glVertex2i(12, 12);
		glVertex2i(14, 12);

    glEnd();

glColor3f(1.0,0.5,0.0);
        glBegin(GL_LINES);
        glVertex2i(14, 11);
		glVertex2i(14, 14);

    glEnd();

glColor3f(1.0,0.5,0.0);
        glBegin(GL_LINES);
        glVertex2i(14, 14);
		glVertex2i(15,14);

    glEnd();

glColor3f(1.0,0.5,0.0);
        glBegin(GL_LINES);
        glVertex2i(15, 14);
		glVertex2i(15, 13);

    glEnd();

glColor3f(1.0,0.5,0.0);
        glBegin(GL_LINES);
        glVertex2i(15, 13);
		glVertex2i(14, 13);

    glEnd();

glColor3f(1.0,0.5,0.0);
        glBegin(GL_LINES);
        glVertex2i(16, 11);
		glVertex2i(16, 14);

    glEnd();

glColor3f(1.0,0.5,0.0);
        glBegin(GL_LINES);
        glVertex2i(16, 14);
		glVertex2i(17,14);

    glEnd();

glColor3f(1.0,0.5,0.0);
        glBegin(GL_LINES);
        glVertex2i(17, 14);
		glVertex2i(17, 13);

    glEnd();

glColor3f(1.0,0.5,0.0);
        glBegin(GL_LINES);
        glVertex2i(17, 13);
		glVertex2i(16, 13);

    glEnd();

glColor3f(1.0,0.5,0.0);
        glBegin(GL_LINES);
        glVertex2i(18, 11);
		glVertex2i(18,13);

    glEnd();

glColor3f(1.0,0.5,0.0);
        glBegin(GL_LINES);
        glVertex2i(18, 13);
		glVertex2i(17, 14);

    glEnd();

glColor3f(1.0,0.5,0.0);
        glBegin(GL_LINES);
        glVertex2i(18, 13);
		glVertex2i(19, 14);

    glEnd();

     glBegin(GL_LINES);
		glVertex2i(17, 6);
		glVertex2i(17, 10);

    glBegin(GL_LINES);
        glVertex2i(17, 10);
		glVertex2i(18, 10);

    glBegin(GL_LINES);
		glVertex2i(18, 10);
		glVertex2i(19, 9);

    glBegin(GL_LINES);
        glVertex2i(19, 9);
        glVertex2i(19, 7);

    glBegin(GL_LINES);
        glVertex2i(19, 7);
		glVertex2i(18, 6);

    glBegin(GL_LINES);
        glVertex2i(18, 6);
        glVertex2i(17, 6);

    glBegin(GL_LINES);
        glVertex2i(17, 8);
        glVertex2i(19, 8);


	glEnd();

	    glBegin(GL_LINES);
        glVertex2i(20, 8);
        glVertex2i(20, 10);


	glEnd();

	    glBegin(GL_LINES);
        glVertex2i(21, 8);
        glVertex2i(21, 10);


	glEnd();

	    glBegin(GL_LINES);
        glVertex2i(21, 10);
        glVertex2i(22, 10);


	glEnd();

	    glBegin(GL_LINES);
        glVertex2i(22, 10);
        glVertex2i(22, 9);


	glEnd();

	    glBegin(GL_LINES);
        glVertex2i(22, 9);
        glVertex2i(21, 9);


	glEnd();

	    glBegin(GL_LINES);
        glVertex2i(21, 9);
        glVertex2i(22, 8);


	glEnd();

        glBegin(GL_LINES);
        glVertex2i(23, 8);
        glVertex2i(23, 10);


	glEnd();

	    glBegin(GL_LINES);
        glVertex2i(22, 10);
        glVertex2i(24, 10);


	glEnd();

        glBegin(GL_LINES);
        glVertex2i(24, 8);
        glVertex2i(24, 10);


	glEnd();

        glBegin(GL_LINES);
        glVertex2i(25, 8);
        glVertex2i(25, 10);


	glEnd();

	    glBegin(GL_LINES);
        glVertex2i(24, 9);
        glVertex2i(25, 9);


	glEnd();

        glBegin(GL_LINES);
        glVertex2i(26, 6);
        glVertex2i(26, 10);


	glEnd();

        glBegin(GL_LINES);
        glVertex2i(26, 10);
        glVertex2i(27, 10);


	glEnd();

	    glBegin(GL_LINES);
        glVertex2i(27, 10);
        glVertex2i(28, 9);


	glEnd();

		    glBegin(GL_LINES);
        glVertex2i(28, 9);
        glVertex2i(28, 7);


	glEnd();

        glBegin(GL_LINES);
        glVertex2i(28, 7);
        glVertex2i(27, 6);


	glEnd();

	    glBegin(GL_LINES);
        glVertex2i(27, 6);
        glVertex2i(26, 6);


	glEnd();  //D

        glBegin(GL_LINES);
        glVertex2i(28,8);
        glVertex2i(29,10);


	glEnd();

        glBegin(GL_LINES);
        glVertex2i(29,10);
        glVertex2i(30,8);


	glEnd();

	    glBegin(GL_LINES);
        glVertex2i(28, 9);
        glVertex2i(30, 9);


	glEnd();  //DA

        glBegin(GL_LINES);
        glVertex2i(31,7);
        glVertex2i(31,9);


	glEnd();

        glBegin(GL_LINES);
        glVertex2i(31,9);
        glVertex2i(30,10);


	glEnd();

	    glBegin(GL_LINES);
        glVertex2i(31,9);
        glVertex2i(32, 10);


	glEnd();  //DAY


    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
		glVertex2i(27,0);
		glVertex2i(30,3);

		glVertex2i(30,4);
		glVertex2i(29,5);

        glVertex2i(28, 5);
		glVertex2i(27,4);

        glVertex2i(26,5);
		glVertex2i(25,5);

        glVertex2i(24,4);
		glVertex2i(24, 3);

	glEnd();  //love

    glColor3f(0.60,0.5,0.5);
    glBegin(GL_POLYGON);
		glVertex2i(7,7);
		glVertex2i(8,5);

		glVertex2i(9,5);
		glVertex2i(10,6);

        glVertex2i(10, 7);
		glVertex2i(8,9);

        glVertex2i(6,9);
		glVertex2i(4,7);

        glVertex2i(4,6);
		glVertex2i(5, 5);
		glVertex2i(6, 5);

	glEnd();

    glBegin(GL_POLYGON);
		glVertex2i(8,3);
		glVertex2i(9,3);

		glVertex2i(10,4);
		glVertex2i(10,6);

        glVertex2i(9,5);
		glVertex2i(8,5);


	glEnd();

    glBegin(GL_POLYGON);
		glVertex2i(6,3);
		glVertex2i(6,5);

		glVertex2i(5,5);
		glVertex2i(4,6);

        glVertex2i(4,4);
		glVertex2i(5,3);


	glEnd();

	glColor3f(0.20,0.0,0.0);
    glBegin(GL_POLYGON);
		glVertex2i(7,4);
		glVertex2i(8,3);

		glVertex2i(8,5);
		glVertex2i(7,7);

        glVertex2i(6,5);
		glVertex2i(6,3);


	glEnd();


glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(200, 150);				// Set window position
	glutInitWindowSize(1000, 450);					// Set window size
	glutCreateWindow("171-15-8647");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(KaziMehediHasan);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
