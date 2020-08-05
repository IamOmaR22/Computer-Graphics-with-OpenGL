#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(1, 1, 1, 0.0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 35.0, 0.0, 45.0);
}

void MdOmarFaruk(void)
{
	float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

	// Draw a filled quadrilateral


    // Moon
    glColor3f(0,0,0); // white moon
    // glColor3f(0,0,0); // black moon
    // glColor3f(0.255, 0.412, 0.714); // blue moon
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(17+3.5*cos(theta),28+3.5*sin(theta));  // here (12,10) is the center and 2 is the radius
	}

	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(18+3.2*cos(theta),29+3.2*sin(theta));

	}

	glEnd();


glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(200, 150);				// Set window position
	glutInitWindowSize(630, 650);					// Set window size width height
	glutCreateWindow("171-15-8709");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(MdOmarFaruk);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
