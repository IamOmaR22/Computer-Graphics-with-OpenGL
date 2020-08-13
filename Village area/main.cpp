#include<windows.h>
#include <GL/glut.h>
#include<math.h>


void init(void)
{

	glClearColor(1.0, 1.0, 1.0, 1.0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 34.0, 0.0, 30.0);
}

void minhajulAbedin(void)
{
    float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window


	// Draw a couple of points

	//Set colour to light blue
	// glColor3f(0.5f, 1.0f, 1.0f);
	glColor3f(0.74902f, 0.847059f, 0.847059f);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(1, 30);
		glVertex2i(33, 30);
		glVertex2i(33, 0);
		glVertex2i(1, 0);

	glEnd();

	//house
	glColor3f(1.0f, 0.5f, 0.0f);
    glBegin(GL_POLYGON);
		glVertex2i(12, 15);
		glVertex2i(16, 15);
		glVertex2i(16, 11);
		glVertex2i(12, 11);

	glEnd();
	glColor3f(1.0f, 0.5f, 0.0f);
    glBegin(GL_POLYGON);
		glVertex2i(16, 15);
		glVertex2i(21, 15);
		glVertex2i(21, 11);
		glVertex2i(16, 11);

	glEnd();
	glColor3f(0.35f, 0.16f, 0.14f);
    glBegin(GL_POLYGON);
		glVertex2i(14, 18);
		glVertex2i(19, 18);
		glVertex2i(21, 15);
		glVertex2i(16, 15);

	glEnd();
	glColor3f(0.35f, 0.16f, 0.14f);
    glBegin(GL_TRIANGLES);
		glVertex2i(12, 15);
		glVertex2i(14, 18);
		glVertex2i(16, 15);


	glEnd();
	// door
	glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
		glVertex2i(13, 13);
		glVertex2i(15, 13);
		glVertex2i(15, 11);
		glVertex2i(13, 11);


	glEnd();
	// window
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
		glVertex2i(17, 14);
		glVertex2i(18, 14);
		glVertex2i(18, 13);
		glVertex2i(17, 13);


	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
		glVertex2i(19, 14);
		glVertex2i(20, 14);
		glVertex2i(20, 13);
		glVertex2i(19, 13);
	glEnd();

	// road
	glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
		glVertex2i(11, 11);
		glVertex2i(19, 11);
		glVertex2i(8, 0);
		glVertex2i(1, 0);
		glVertex2i(1, 3);
	glEnd();

    // fields
   glColor3f(0.0f, 1.0f, 0.0f);//Green
    glBegin(GL_POLYGON);
		glVertex2i(18, 11);
		glVertex2i(33, 11);
		glVertex2i(33, 0);
		glVertex2i(7, 0);

	glEnd();
	glColor3f(0.0f, 1.0f, 0.0f);//Green
    glBegin(GL_POLYGON);
		glVertex2i(1, 11);
		glVertex2i(11, 11);
		glVertex2i(1, 3);

	glEnd();
    // sun
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
    glBegin(GL_POLYGON);
    for(i=0;i<360;i++){
        theta=i*3.142/180;
        glVertex2f(5+2*cos(theta),20+2*sin(theta));

    }

    glEnd();
    // river
   glColor4f(0.0f, 1.0f, 1.0f, 1.0f);//light blue
    glBegin(GL_POLYGON);
		glVertex2i(23, 11);
		glVertex2i(33, 11);
		glVertex2i(29, 5);
		glVertex2i(18, 5);

	glEnd();
	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);//light blue
    glBegin(GL_POLYGON);
		glVertex2i(21, 5);
		glVertex2i(32, 5);
		glVertex2i(28, 0);
		glVertex2i(16, 0);

	glEnd();

	// boat
	glColor3f(0.5f, 0.5f, 0.5f);//Violet
    glBegin(GL_POLYGON);
		glVertex2i(23, 7);
		glVertex2i(27, 7);
		glVertex2i(26, 6);
		glVertex2i(24, 6);

	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(3);
    glBegin(GL_LINES);
		glVertex2i(24, 8);
		glVertex2i(25, 5);


	glEnd();

	// tree
	glColor3f(0.647059f, 0.164706f, 0.164706f);//Brown

    glBegin(GL_POLYGON);
		glVertex2i(24, 15);
		glVertex2i(25, 15);
		glVertex2i(25, 11);
		glVertex2i(24, 11);

	glEnd();
glColor3f(0.137255f, 0.556863f, 0.137255f);//Forest Green
	glBegin(GL_POLYGON);
		glVertex2i(23, 20);
		glVertex2i(26, 20);
		glVertex2i(27, 19);
		glVertex2i(27, 16);
		glVertex2i(26, 15);
		glVertex2i(23, 15);
		glVertex2i(22, 16);
		glVertex2i(22, 19);

	glEnd();



	glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(750, 550);					// Set window size
	glutCreateWindow("171-15-8700");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(minhajulAbedin);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
