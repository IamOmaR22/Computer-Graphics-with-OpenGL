#include<windows.h>
#include <GL/glut.h>

void init(void)
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 32.0, 0.0, 33.0);
}

void MdOmarFaruk(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

	// Draw a filled quadrilateral

	 glColor3f(0.5f, 0.5f, 0.5f);

	glBegin(GL_POLYGON);
        glVertex2i(2, 2);
		glVertex2i(28, 2);
		glVertex2i(29, 3);
		glVertex2i(29, 32);
		glVertex2i(3, 32);
		glVertex2i(2, 31);

	glEnd();

	glColor3f(0.0f, 0.1f, 0.1f);
	glBegin(GL_POLYGON);
        glVertex2i(3, 3);
		glVertex2i(28, 3);
		glVertex2i(28, 31);
		glVertex2i(3, 31);
	glEnd();


    // Cake Layer Start
    glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
        glVertex2i(4, 5);
		glVertex2i(27, 5);
		glVertex2i(27, 9);
		glVertex2i(4, 9);
	glEnd();

	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
        glVertex2i(6, 9);
		glVertex2i(25, 9);
		glVertex2i(25, 13);
		glVertex2i(6, 13);
	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
        glVertex2i(8, 13);
		glVertex2i(23, 13);
		glVertex2i(23, 16);
		glVertex2i(8, 16);
	glEnd();

	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
        glVertex2i(10, 16);
		glVertex2i(21, 16);
		glVertex2i(21, 19);
		glVertex2i(10, 19);
	glEnd();


glColor3f(0.5f, 0.5f, 0.5f);
	glBegin(GL_POLYGON);
        glVertex2i(12, 19);
		glVertex2i(19, 19);
		glVertex2i(19, 22);
		glVertex2i(12, 22);
	glEnd();

	glColor3f(0.309804f, 0.184314f, 0.309804f);
	glBegin(GL_POLYGON);
        glVertex2i(14, 22);
		glVertex2i(17, 22);
		glVertex2i(17, 25);
		glVertex2i(14, 25);
	glEnd();

    // Heart
	glColor3f(1,0,0);
	glBegin(GL_POLYGON);
        glVertex2i(6, 18);
		glVertex2i(9, 21);
		glVertex2i(9, 22);
		glVertex2i(8, 23);
		glVertex2i(7, 23);

		glVertex2i(6, 22);
		glVertex2i(5, 23);
		glVertex2i(4, 23);
		glVertex2i(3, 22);
		glVertex2i(3, 21);
	glEnd();

    // H Start
	glColor3f(0,0,1);
	glBegin(GL_LINES);
        glVertex2i(5, 26);
		glVertex2i(5, 30);

    glEnd();
    glBegin(GL_LINES);
        glVertex2i(3, 28);
		glVertex2i(5, 28);
    glEnd();

    // A Start
    glColor3f(1,0,1);
	glBegin(GL_LINES);
        glVertex2i(5, 26);
		glVertex2i(7, 29);

    glEnd();
    glBegin(GL_LINES);
        glVertex2i(7, 29);
		glVertex2i(8, 26);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(6, 27);
		glVertex2i(8, 27);
    glEnd();

    // P Start (1 st)
    glColor3f(1,0,0);
	glBegin(GL_LINES);
        glVertex2i(8, 26);
		glVertex2i(8, 30);

    glEnd();
    glBegin(GL_LINES);
        glVertex2i(8, 30);
		glVertex2i(10, 30);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(10, 30);
		glVertex2i(10, 28);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(10, 28);
		glVertex2i(8, 28);
    glEnd();



    // P Start (2nd)
    glColor3f(0,0,1);
	glBegin(GL_LINES);
        glVertex2i(10, 23);
		glVertex2i(10, 27);

    glEnd();
    glBegin(GL_LINES);
        glVertex2i(10, 27);
		glVertex2i(12, 27);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(12, 27);
		glVertex2i(12, 25);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(12, 25);
		glVertex2i(10, 25);
    glEnd();



    // Y Start
    glColor3f(1,0,1);
	glBegin(GL_LINES);
        glVertex2i(13, 27);
		glVertex2i(13, 29);

    glEnd();
    glBegin(GL_LINES);
        glVertex2i(13, 29);
		glVertex2i(12, 31);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(13, 29);
		glVertex2i(14, 31);
    glEnd();


    // B Start
    glColor3f(1,0,0);
	glBegin(GL_LINES);
        glVertex2i(17, 26);
		glVertex2i(17, 30);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(17, 30);
		glVertex2i(19, 30);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(19, 30);
		glVertex2i(19, 26);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(19, 26);
		glVertex2i(17, 26);
    glEnd();

     glBegin(GL_LINES);
        glVertex2i(17, 28);
		glVertex2i(19, 28);
    glEnd();


    // I Start
    glColor3f(0,0,1);
	glBegin(GL_LINES);
        glVertex2i(20, 26);
		glVertex2i(20, 30);
    glEnd();


    // R Start
    glColor3f(1,0,1);
	glBegin(GL_LINES);
        glVertex2i(21, 26);
		glVertex2i(21, 30);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(21, 30);
		glVertex2i(23, 30);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(23, 30);
		glVertex2i(23, 28);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(23, 28);
		glVertex2i(21, 28);
    glEnd();

     glBegin(GL_LINES);
        glVertex2i(21, 28);
		glVertex2i(23, 26);
    glEnd();


    // T Start
    glColor3f(1,0,0);
	glBegin(GL_LINES);
        glVertex2i(23, 30);
		glVertex2i(27, 30);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(25, 30);
		glVertex2i(25, 26);
    glEnd();



    // H Start
    glColor3f(0,0,1);
	glBegin(GL_LINES);
        glVertex2i(25, 27);
		glVertex2i(27, 27);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(27, 25);
		glVertex2i(27, 29);
    glEnd();


    // D Start
    glColor3f(1,0,1);
	glBegin(GL_LINES);
        glVertex2i(22, 23);
		glVertex2i(22, 19);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(22, 23);
		glVertex2i(23, 23);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(23, 23);
		glVertex2i(24, 22);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(24, 22);
		glVertex2i(24, 20);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(24, 20);
		glVertex2i(23, 19);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(23, 19);
		glVertex2i(22, 19);
    glEnd();


    // A Start
    glColor3f(1,0,0);
	glBegin(GL_LINES);
        glVertex2i(24, 18);
		glVertex2i(25, 22);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(25, 22);
		glVertex2i(26, 18);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(24, 19);
		glVertex2i(26, 19);
    glEnd();


    // Y Start
    glColor3f(0,0,1);
	glBegin(GL_LINES);
        glVertex2i(26, 21);
		glVertex2i(26, 23);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(26, 23);
		glVertex2i(25, 24);
    glEnd();

    glBegin(GL_LINES);
        glVertex2i(26, 23);
		glVertex2i(27, 24);
    glEnd();


    // Arrow Start
    glBegin(GL_POLYGON);
        glVertex2i(4, 5);
		glVertex2i(6, 7);
		glVertex2i(8, 5);
	glEnd();

	glBegin(GL_POLYGON);
        glVertex2i(8, 5);
		glVertex2i(10, 7);
		glVertex2i(12, 5);
	glEnd();

	glBegin(GL_POLYGON);
        glVertex2i(12, 5);
		glVertex2i(14, 7);
		glVertex2i(16, 5);
	glEnd();

	glBegin(GL_POLYGON);
        glVertex2i(16, 5);
		glVertex2i(18, 7);
		glVertex2i(20, 5);
	glEnd();

	glBegin(GL_POLYGON);
        glVertex2i(20, 5);
		glVertex2i(22, 7);
		glVertex2i(24, 5);
	glEnd();

	glBegin(GL_POLYGON);
        glVertex2i(24, 5);
		glVertex2i(25, 7);
		glVertex2i(27, 5);
	glEnd();


	// Box 1 Start
	glColor3f(0,0.5,1);
	glBegin(GL_POLYGON);
        glVertex2i(16, 8);
		glVertex2i(18, 10);
		glVertex2i(16, 12);
		glVertex2i(14, 10);
	glEnd();

	glBegin(GL_POLYGON);
        glVertex2i(16, 12);
		glVertex2i(18, 14);
		glVertex2i(16, 16);
		glVertex2i(14, 14);
	glEnd();

glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(200, 150);				// Set window position
	glutInitWindowSize(530, 650);					// Set window size
	glutCreateWindow("171-15-8709");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(MdOmarFaruk);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
