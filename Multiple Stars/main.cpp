#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(255, 255,255, 0.0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 30.0, 0.0, 20.0);
}

void MdOmarFaruk(void)
{
	float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

	// Draw a filled quadrilateral

	// 223, 0, 251
	glColor3f(0.863, 0.588, 0.973);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(15+8*cos(theta),9+8*sin(theta));

	}
	glEnd();

// Box
	// 253, 255, 119
    glColor3f(0.996, 1, 0.467);
	glBegin(GL_POLYGON);
        glVertex2i(11, 13.5);
        glVertex2i(8, 12);
        glVertex2i(10.5, 9.5);
        glVertex2i(12, 10);
    glEnd();

    glColor3f(0.996, 1, 0.467);
	glBegin(GL_POLYGON);
        glVertex2i(12, 13);
        glVertex2i(12, 15);
        glVertex2i(14, 14);
        glVertex2i(14, 12);
    glEnd();


    glColor3f(0.996, 1, 0.467);
	glBegin(GL_POLYGON);
        glVertex2i(16, 14);
        glVertex2i(18, 15);
        glVertex2i(19, 13.5);
        glVertex2i(17, 12);
    glEnd();

    glColor3f(0.996, 1, 0.467);
	glBegin(GL_POLYGON);
        glVertex2i(19.5, 13.5);
        glVertex2i(21, 11);
        glVertex2i(20, 10);
        glVertex2i(18, 10);
    glEnd();

    glColor3f(0.996, 1, 0.467);
    glBegin(GL_POLYGON);
        glVertex2i(20, 8);
        glVertex2i(21, 6);
        glVertex2i(19, 5.5);
        glVertex2i(18, 8);
    glEnd();

    glColor3f(0.996, 1, 0.467);
    glBegin(GL_POLYGON);
        glVertex2i(19.5, 5);
        glVertex2i(18, 3);
        glVertex2i(16, 4);
        glVertex2i(16, 6);
    glEnd();

    glColor3f(0.996, 1, 0.467);
    glBegin(GL_POLYGON);
        glVertex2i(14, 4);
        glVertex2i(13, 3);
        glVertex2i(11, 5);
        glVertex2i(13, 6);
    glEnd();

    glColor3f(0.996, 1, 0.467);
    glBegin(GL_POLYGON);
        glVertex2i(10.5, 5);
        glVertex2i(9, 7);
        glVertex2i(10, 8);
        glVertex2i(12, 8);
    glEnd();

    // First Star
	// 0, 0, 0

    glColor3f(0.263, 0.996, 0.992);
	glBegin(GL_POLYGON);
        glVertex2i(11, 10);
		glVertex2i(10, 14);
		glVertex2i(13, 13);
		glVertex2i(15, 15);
		glVertex2i(18, 13);
		glVertex2i(20, 14);
		glVertex2i(19, 11);
		glVertex2i(21, 9);
		glVertex2i(19, 7);
		glVertex2i(20, 4);
		glVertex2i(17, 5);
		glVertex2i(15, 3);
		glVertex2i(12, 5);
		glVertex2i(10, 4);
		glVertex2i(11, 7);
		glVertex2i(9, 8);
	glEnd();

	// Second Star
	// 0, 1, 1
    glColor3f(0.459, 0.447, 0.459);
	glBegin(GL_POLYGON);
        glVertex2i(12, 10);
		glVertex2i(11, 13);
		glVertex2i(14, 12);
		glVertex2i(15, 14);
		glVertex2i(17, 12);
		glVertex2i(19, 13);
		glVertex2i(18, 10);
		glVertex2i(20, 9);
		glVertex2i(18, 8);
		glVertex2i(19, 5);
		glVertex2i(16, 6);
		glVertex2i(15, 4);
		glVertex2i(13, 6);
		glVertex2i(11, 5);
		glVertex2i(12, 8);
		glVertex2i(10, 9);
	glEnd();

	// Third Star
    // 0, 0, 105
    glColor3f(1, 0.384, 0.412);
	glBegin(GL_POLYGON);
        glVertex2i(13, 10);
		glVertex2i(12, 12);
		glVertex2i(14, 11);
		glVertex2i(15, 13);
		glVertex2i(16, 11);
		glVertex2i(18, 12);
		glVertex2i(17, 10);
		glVertex2i(19, 9);
		glVertex2i(17, 8);
		glVertex2i(18, 6);
		glVertex2i(16, 7);
		glVertex2i(15, 5);
		glVertex2i(14, 7);
		glVertex2i(12, 6);
		glVertex2i(13, 8);
		glVertex2i(11, 9);
	glEnd();


glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(200, 150);				// Set window position
	glutInitWindowSize(830, 550);					// Set window size width height
	glutCreateWindow("171-15-8709");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(MdOmarFaruk);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
